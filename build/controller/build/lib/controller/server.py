import rclpy
import math
import numpy as np
from rclpy.node import Node
from rclpy.action import ActionServer
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from std_msgs.msg import Bool
from geometry_msgs.msg import Pose, Point, Quaternion
from control_interfaces.srv import SetPosition, SetPose
from control_interfaces.action import FollowPath
from scipy.spatial.transform import Rotation as R
from rclpy.executors import MultiThreadedExecutor
from scipy.spatial.transform import Rotation
from queue import Queue
import threading


class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.odom_subscriber = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.commanded_pose_publisher = self.create_publisher(Pose, '/commanded_pose', 10)
        self.goal_service = self.create_service(SetPosition, 'set_goal', self.handle_set_goal)
        self.pose_service = self.create_service(SetPose, 'set_pose', self.handle_set_pose)
        self.path_action_server = ActionServer(self, FollowPath, 'follow_path', self.handle_follow_path)
        self.pose_lock = threading.Lock()
        self.current_pose = (0.0, 0.0, 0.0)

        self.command_queue = Queue()
        self.worker_thread = threading.Thread(target=self.process_commands)
        self.worker_thread.start()
        self.get_logger().info("RobotController initialized successfully")

    def odom_callback(self, msg):
        position = msg.pose.pose.position
        orientation_q = msg.pose.pose.orientation
        orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
        _, _, yaw = R.from_quat(orientation_list).as_euler("xyz")
        self.pose_lock.acquire()
        self.current_pose = (position.x, position.y, yaw)
        self.pose_lock.release()
        self.get_logger().debug(f"Updated current pose: (x={position.x}, y={position.y}, theta={yaw})")

    def handle_set_goal(self, request, response):
        self.command_queue.put(('position', request.position.x, request.position.y))
        response.success = Bool(data=True) 
        return response

    def handle_set_pose(self, request, response):
        orientation_list = [request.pose.orientation.x, request.pose.orientation.y, request.pose.orientation.z, request.pose.orientation.w]
        _, _, yaw = R.from_quat(orientation_list).as_euler("xyz")
        self.command_queue.put(('pose', request.pose.position.x, request.pose.position.y, yaw))
        response.success = Bool(data=True) 
        return response

    def handle_follow_path(self, goal_handle):
        self.get_logger().info("Received request to follow path")

        progress_queue = Queue()
        self.command_queue.put(('path', goal_handle.request.waypoints.poses, progress_queue))

        feedback_msg = FollowPath.Feedback()
        while True:
            n_processed = progress_queue.get()
            if n_processed is None:
                break     
            feedback_msg.progress = n_processed / len(goal_handle.request.waypoints.poses)
            goal_handle.publish_feedback(feedback_msg)

        goal_handle.succeed()

        result = FollowPath.Result()
        result.success = Bool(data=True)
        return result
    
    def process_commands(self):
        while rclpy.ok():
            command = self.command_queue.get()  
            if command[0] == 'position':
                self.move_to_goal(command[1], command[2])
            elif command[0] == 'pose':
                self.move_to_goal(command[1], command[2], command[3])
            elif command[0] == 'path':
                progress_queue = command[2]
                for i, pose in enumerate(command[1]):
                    orientation_list = [pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w]
                    _, _, yaw = R.from_quat(orientation_list).as_euler("xyz")
                    self.move_to_goal(pose.position.x, pose.position.y, yaw)
                    progress_queue.put(i+1)
                progress_queue.put(None)

    def move_to_goal(self, x, y, theta=None):
        current_x, current_y, _ = self.current_pose
        self.get_logger().info(f"Moving from {current_x},{current_y} to {x},{y}")

        # For rosbagging:
        pub_theta = theta if theta is not None else 0
        rot = Rotation.from_euler('xyz', [0, 0, pub_theta])
        quat = rot.as_quat()
        pose = Pose(position=Point(x=x, y=y), 
                            orientation=Quaternion(x=quat[0], y=quat[1], z=quat[2], w=quat[3]))
        self.commanded_pose_publisher.publish(pose)

        rotate_angle = math.atan2(y - current_y, x - current_x)
        distance = math.sqrt((x - current_x) ** 2 + (y - current_y) ** 2)

        self.get_logger().info("Rotating towards goal point")
        self.rotate(rotate_angle)
        self.get_logger().info("Moving towards goal point")
        self.move_forward(distance)

        if theta is not None:
            self.get_logger().info("Rotating towards goal orientation")
            self.rotate(theta)

    def rotate(self, target_heading):
        twist = Twist()
        rate = self.create_rate(20)

        angular_speed_base = 0.1
        angular_speed_proportional = 0.1

        i = 1
        while rclpy.ok():
            _, _, current_heading = self.current_pose

            angle_error = math.atan2(math.sin(target_heading - current_heading), 
                                    math.cos(target_heading - current_heading))

            if abs(angle_error) < 0.01:
                break

            if i % 20 == 0:
                self.get_logger().info(f"Current heading error {angle_error}")
                i = 1
            else:
                i += 1

            twist.angular.z = np.sign(angle_error) * (angular_speed_base + np.abs(angle_error)/np.pi*angular_speed_proportional)
            self.publisher.publish(twist)
            rate.sleep()

        twist.angular.z = 0.0
        self.publisher.publish(twist)

    def move_forward(self, distance):
        twist = Twist()
        rate = self.create_rate(20)  # 20Hz control loop for smoother operation

        linear_speed = 0.1
        start_x, start_y, _ = self.current_pose

        i = 1
        while distance > 0.01:
            twist.linear.x = linear_speed
            self.publisher.publish(twist)
            current_x, current_y, _ = self.current_pose
            distance -= math.sqrt((current_x - start_x) ** 2 + (current_y - start_y) ** 2)

            if i % 20 == 0:
                self.get_logger().info(f"Distance left {distance}")
                i = 1
            else:
                i += 1

            start_x, start_y = current_x, current_y
            rate.sleep()  # Maintain loop rate

        twist.linear.x = 0.0
        self.publisher.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    robot_controller = RobotController()

    # Use a MultiThreadedExecutor
    executor = MultiThreadedExecutor()

    # Add the node to the executor
    executor.add_node(robot_controller)

    try:
        # Use the executor to spin the node
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        # Shutdown and cleanup
        robot_controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()