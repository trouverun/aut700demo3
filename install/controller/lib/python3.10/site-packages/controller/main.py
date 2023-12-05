import rclpy
import math
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.service import Service
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from controller.srv import SetGoal, SetPose
from controller.action import FollowPath
from scipy.spatial.transform import Rotation as R


class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.odom_subscriber = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.goal_service = self.create_service(SetGoal, 'set_goal', self.handle_set_goal)
        self.pose_service = self.create_service(SetPose, 'set_pose', self.handle_set_pose)
        self.path_action_server = ActionServer(self, FollowPath, 'follow_path', self.handle_follow_path)
        self.current_pose = (0.0, 0.0, 0.0)
        self.get_logger().info("RobotController initialized successfully")

    def odom_callback(self, msg):
        position = msg.pose.position
        orientation_q = msg.pose.orientation
        orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
        _, _, yaw = R.from_quat(orientation_list).as_euler()
        self.current_pose = (position.x, position.y, yaw)
        self.get_logger().info(f"Updated current pose: ({position.x}, {position.y}, {yaw})")

    def handle_set_goal(self, request, response):
        self.get_logger().info(f"Received new goal point: ({request.x}, {request.y})")
        self.move_to_goal(request.x, request.y)
        response.success = True
        return response

    def handle_set_pose(self, request, response):
        self.get_logger().info(f"Received new goal pose: ({request.position.x}, {request.position.y}, {request.orientation})")
        orientation_list = [request.orientation.x, request.orientation.y, request.orientation.z, request.orientation.w]
        _, _, yaw = R.from_quat(orientation_list).as_euler()
        self.move_to_goal(request.position.x, request.position.y, yaw)
        response.success = True
        return response

    def handle_follow_path(self, goal_handle):
        self.get_logger().info("Received request to follow path")
        goal_handle.succeed()
        return FollowPath.Result()

    def move_to_goal(self, x, y, theta=None):
        current_x, current_y, current_theta = self.current_pose
        heading = math.atan2(y - current_y, x - current_x)
        distance = math.sqrt((x - current_x) ** 2 + (y - current_y) ** 2)

        self.rotate(heading - current_theta)
        self.move_forward(distance)
        if theta is not None:
            self.rotate(theta - heading)

    def rotate(self, angle):
        twist = Twist()
        angular_speed = 0.1  # Adjust as necessary
        angle = self.normalize_angle(angle)

        while abs(angle) > 0.05:  # Threshold to stop rotation
            twist.angular.z = angular_speed if angle > 0 else -angular_speed
            self.publisher.publish(twist)
            rclpy.spin_once(self, timeout_sec=0.1)
            _, _, current_theta = self.current_pose
            angle = self.normalize_angle(angle - current_theta)

        twist.angular.z = 0
        self.publisher.publish(twist)

    def move_forward(self, distance):
        twist = Twist()
        linear_speed = 0.1  # Adjust as necessary
        start_x, start_y, _ = self.current_pose

        while distance > 0.05:  # Threshold to stop forward movement
            twist.linear.x = linear_speed
            self.publisher.publish(twist)
            rclpy.spin_once(self, timeout_sec=0.1)
            current_x, current_y, _ = self.current_pose
            distance -= math.sqrt((current_x - start_x) ** 2 + (current_y - start_y) ** 2)
            start_x, start_y = current_x, current_y

        twist.linear.x = 0
        self.publisher.publish(twist)

    def normalize_angle(self, angle):
        while angle > math.pi:
            angle -= 2 * math.pi
        while angle < -math.pi:
            angle += 2 * math.pi
        return angle

def main(args=None):
    rclpy.init(args=args)
    robot_controller = RobotController()

    try:
        rclpy.spin(robot_controller)
    except KeyboardInterrupt:
        pass

    robot_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()