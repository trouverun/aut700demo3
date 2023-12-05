import rosbag2_py
import matplotlib.pyplot as plt

def read_poses_from_bag(bag_file, topic_name):
    storage_options = rosbag2_py.StorageOptions(uri=bag_file, storage_id='sqlite3')
    converter_options = rosbag2_py.ConverterOptions('', '')
    reader = rosbag2_py.SequentialReader()

    reader.open(storage_options, converter_options)

    poses = []
    topic_filter = [topic_name]
    reader.set_filter(topics=topic_filter)

    while reader.has_next():
        (topic, data, t) = reader.read_next()
        pose = data.pose.pose  # Adjust this based on your message structure
        poses.append((pose.position.x, pose.position.y))

    return poses

# Specify your bag file and topics
bag_file = 'rosbag2_2023_12_05-22_49_42/rosbag2_2023_12_05-22_49_42_0.db3'
recorded_topic = '/odom/pose/pose'
commanded_topic = '/commanded_pose'

recorded_poses = read_poses_from_bag(bag_file, recorded_topic)
commanded_poses = read_poses_from_bag(bag_file, commanded_topic)

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
plt.show()
