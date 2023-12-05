import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from geometry_msgs.msg import Pose, Point, Quaternion, PoseArray
from std_msgs.msg import Bool
from scipy.spatial.transform import Rotation
import math
import threading
import sys
from rclpy.executors import SingleThreadedExecutor

from control_interfaces.srv import SetPosition, SetPose
from control_interfaces.action import FollowPath

class CLIController(Node):
    def __init__(self):
        super().__init__('cli_controller')
        self.position_client = self.create_client(SetPosition, 'set_goal')
        self.pose_client = self.create_client(SetPose, 'set_pose')
        self.path_client = ActionClient(self, FollowPath, 'follow_path')
        self.async_executor = SingleThreadedExecutor()  

    def send_position(self, x, y):
        request = SetPosition.Request()
        request.position = Point(x=x, y=y)
        future = self.position_client.call_async(request)
        rclpy.spin_until_future_complete(self, future, self.async_executor)
        self.get_logger().info(f'Position set response: {future.result().success}')

    def send_pose(self, x, y, yaw):
        roll_rad, pitch_rad, yaw_rad = map(math.radians, [0, 0, yaw])
        rot = Rotation.from_euler('xyz', [roll_rad, pitch_rad, yaw_rad])
        quat = rot.as_quat()
        request = SetPose.Request()
        request.pose = Pose(position=Point(x=x, y=y), 
                            orientation=Quaternion(x=quat[0], y=quat[1], z=quat[2], w=quat[3]))
        future = self.pose_client.call_async(request)
        rclpy.spin_until_future_complete(self, future, self.async_executor)
        self.get_logger().info(f'Position set response: {future.result().success}')

    def send_path(self, path):
        goal_msg = FollowPath.Goal()
        goal_msg.waypoints = PoseArray(poses=path)

        send_goal_future = self.path_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        send_goal_future.add_done_callback(self.goal_response_callback)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Path execution progress: %.2f %%' % feedback.progress)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Path execution rejected')
            return

        self.get_logger().info('Path execution accepted')
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Path execution result: {result.success}')

def main(args=sys.argv):
    rclpy.init(args=args)
    cli_controller = CLIController()

    def cli_thread():
        poses = []
        adding_path = False
        while True:
            query = "Enter command: [(position x y), (pose x y theta), (path)]\n"
            if adding_path:
                query = "Enter path pose (enter 'done' to finish): x y theta\n"
            cmd = input(query).split()

            if cmd[0].lower() == "position" and len(cmd) == 3:
                cli_controller.send_position(float(cmd[1]), float(cmd[2]))
            elif cmd[0].lower() == "pose" and len(cmd) == 4:
                cli_controller.send_pose(float(cmd[1]), float(cmd[2]), float(cmd[3]))
            elif cmd[0].lower() == "path":
                adding_path = True
                poses = []
            elif cmd[0].lower() == "done" and adding_path:
                cli_controller.send_path(poses)
                adding_path = False
            elif adding_path:
                try:
                    x, y, yaw = map(float, cmd)
                    _, _, yaw = map(math.radians, [0, 0, yaw])
                    rot = Rotation.from_euler('xyz', [0, 0, yaw])
                    quat = rot.as_quat()
                    pose = Pose(position=Point(x=x, y=y),
                                orientation=Quaternion(x=quat[0], y=quat[1], z=quat[2], w=quat[3]))
                    poses.append(pose)
                except ValueError:
                    print("Invalid pose format. Please enter pose as (x y theta)")
            else:
                print("Invalid command or format. Please enter a valid command.")

    thread = threading.Thread(target=cli_thread, args=())
    thread.start()

    rclpy.spin(cli_controller)
    cli_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
