import rosbag2_py
import matplotlib.pyplot as plt
from rosbag2_py import StorageOptions, ConverterOptions, SequentialReader, StorageFilter
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message


def read_commanded_poses_from_bag(bag_file, topic_name):
    storage_options = StorageOptions(uri=bag_file, storage_id='sqlite3')
    converter_options = ConverterOptions('', '')
    reader = SequentialReader()

    reader.open(storage_options, converter_options)

    # Create a StorageFilter and set the topic filter
    topic_filter = StorageFilter(topics=[topic_name])
    reader.set_filter(topic_filter)

    msg_type = get_message('geometry_msgs/msg/Pose')

    poses = []
    while reader.has_next():
        (topic, data, t) = reader.read_next()
        pose = deserialize_message(data, msg_type)
        poses.append((pose.position.x, pose.position.y))

    return poses

def read_recorded_poses_from_bag(bag_file, topic_name):
    storage_options = StorageOptions(uri=bag_file, storage_id='sqlite3')
    converter_options = ConverterOptions('', '')
    reader = SequentialReader()

    reader.open(storage_options, converter_options)

    # Create a StorageFilter and set the topic filter
    topic_filter = StorageFilter(topics=[topic_name])
    reader.set_filter(topic_filter)

    msg_type = get_message('nav_msgs/msg/Odometry')

    poses = []
    while reader.has_next():
        (topic, data, t) = reader.read_next()
        odom = deserialize_message(data, msg_type)
        poses.append((odom.pose.pose.position.x, odom.pose.pose.position.y))

    return poses

# Specify your bag file and topics
bag_file = 'rosbag2_2023_12_05-23_33_40/rosbag2_2023_12_05-23_33_40_0.db3'
commanded_topic = '/commanded_pose'
recorded_topic = '/odom'

commanded_poses = read_commanded_poses_from_bag(bag_file, commanded_topic)
print(commanded_poses)
recorded_poses = read_recorded_poses_from_bag(bag_file, recorded_topic)
print(recorded_poses)

# Extracting x and y coordinates
recorded_x, recorded_y = zip(*recorded_poses)
commanded_x, commanded_y = zip(*commanded_poses)

plt.figure(figsize=(10, 10))
plt.plot(recorded_x, recorded_y, label='Recorded Poses', color='blue', marker='o')
plt.plot(commanded_x, commanded_y, label='Commanded Poses', color='red', marker='x')
plt.xlabel('X Position')
plt.ylabel('Y Position')
plt.title('Recorded vs Commanded Poses')
plt.legend()
plt.grid(True)
bag_folder = bag_file.split('/')[0]
plt.savefig(f"{bag_folder}_evaluation.png")
