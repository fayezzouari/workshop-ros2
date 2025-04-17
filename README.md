# ROS 2 Workshop: Introduction to Core Concepts and Hands-On Practice

This README provides a complete guide for a hands-on workshop introducing **ROS 2 (Robot Operating System 2)**. Participants will learn the basics of ROS 2 architecture, set up a workspace, create a package, implement a publisher and subscriber in Python, visualize topic data, and build a custom message for a service.

---

## Workshop Objective

By the end of this 2.5-hour workshop, participants will:
- Understand the ROS 2 architecture and core concepts (nodes, topics, services, messages).
- Set up a ROS 2 workspace and create a package.
- Implement and run a publisher and subscriber in Python.
- Visualize data exchange using ROS 2 topics.
- Create a custom message and use it in a service.

---

## Prerequisites

- **Operating System**: Ubuntu 22.04 (Jammy) with **ROS 2 Humble** installed. Follow the [ROS 2 Humble Installation Guide](https://docs.ros.org/en/humble/Installation.html).
- **Software**:
  - Terminal.
  - Python 3.
  - `colcon` build tool (`sudo apt install python3-colcon-common-extensions`).
  - ROS 2 CLI tools.
- **Knowledge**: Basic familiarity with Linux commands and Python.
- **Hardware**: Laptop with at least 4GB RAM.
- **Pre-Workshop Setup**:
  - Install ROS 2 Humble.
  - Source the ROS 2 environment: `source /opt/ros/humble/setup.bash`.
  - Add to `~/.bashrc` for convenience: `echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc`.

---

## 1. Introduction to ROS 2 Architecture

**Objective**: Understand the core components of ROS 2.

**Key Concepts**:
- **What is ROS 2?**
  - A middleware for robot software development.
  - Uses DDS (Data Distribution Service) for robust communication.
- **Core Components**:
  - **Nodes**: Processes performing tasks (e.g., sensor drivers).
  - **Topics**: Publish-subscribe communication for data streams.
  - **Services**: Request-response communication for specific tasks.
  - **Messages**: Data structures for communication (e.g., `std_msgs/String`).
  - **Workspace**: Directory to organize packages and build artifacts.
- **Why ROS 2?**
  - Modular, reusable code.
  - Tools like `rviz2`, `Gazebo`, and `rqt` for visualization and debugging.

**Demo**:
- Run a simple publisher-subscriber pair:
  ```bash
  ros2 run demo_nodes_cpp talker
  ```
  In another terminal:
  ```bash
  ros2 run demo_nodes_cpp listener
  ```
- Explanation: `talker` publishes to a topic; `listener` subscribes to it.

---

## 2. Setting Up a ROS 2 Workspace

**Objective**: Create and configure a ROS 2 workspace.

**Steps**:
1. **Create Workspace Directory**:
   ```bash
   mkdir -p ~/ros2_ws/src
   cd ~/ros2_ws
   ```
   - `src`: Holds ROS 2 packages.
   - `ros2_ws`: Workspace root.

2. **Source ROS 2**:
   ```bash
   source /opt/ros/humble/setup.bash
   ```

3. **Build Empty Workspace**:
   ```bash
   colcon build
   ```
   - `colcon`: ROS 2 build tool.
   - Creates `install`, `build`, and `log` directories.

4. **Source Workspace**:
   ```bash
   source ~/ros2_ws/install/setup.bash
   ```
   - Add to `~/.bashrc`:
     ```bash
     echo "source ~/ros2_ws/install/setup.bash" >> ~/.bashrc
     ```

5. **Verify Setup**:
   ```bash
   printenv | grep ROS
   ```
   - Look for `ROS_VERSION=2` and `ROS_DISTRO=humble`.

**Troubleshooting**:
- Install `colcon` if missing:
  ```bash
  sudo apt install python3-colcon-common-extensions
  ```

---

## 3. Creating a ROS 2 Package

**Objective**: Create a Python-based ROS 2 package.

**Steps**:
1. **Navigate to Source Directory**:
   ```bash
   cd ~/ros2_ws/src
   ```

2. **Create Package**:
   ```bash
   ros2 pkg create --build-type ament_python my_first_package --dependencies rclpy std_msgs
   ```
   - `--build-type ament_python`: Python package.
   - `--dependencies`: Includes `rclpy` (ROS 2 Python library) and `std_msgs` (standard messages).

3. **Inspect Package**:
   ```bash
   cd my_first_package
   ls
   ```
   - `package.xml`: Metadata.
   - `setup.py`: Python configuration.
   - `setup.cfg`: Build settings.
   - `my_first_package/`: Python scripts directory.

4. **Build Package**:
   ```bash
   cd ~/ros2_ws
   colcon build
   source install/setup.bash
   ```

5. **Verify Package**:
   ```bash
   ros2 pkg list | grep my_first_package
   ```
   - Should output `my_first_package`.

---

## 4. Building a Publisher and Subscriber in Python

**Objective**: Implement a publisher and subscriber to demonstrate topic communication.

**Steps**:

1. **Navigate to Python Directory**:
   ```bash
   cd ~/ros2_ws/src/my_first_package/my_first_package
   ```

2. **Create Publisher Script** (`talker.py`):
   ```bash
   touch talker.py
   ```
   - Edit `talker.py`:
     ```python
     import rclpy
     from rclpy.node import Node
     from std_msgs.msg import String

     class Talker(Node):
         def __init__(self):
             super().__init__('talker')
             self.publisher_ = self.create_publisher(String, 'chatter', 10)
             timer_period = 1.0  # seconds
             self.timer = self.create_timer(timer_period, self.timer_callback)
             self.i = 0

         def timer_callback(self):
             msg = String()
             msg.data = f'Hello, ROS 2! Count: {self.i}'
             self.publisher_.publish(msg)
             self.get_logger().info(f'Publishing: "{msg.data}"')
             self.i += 1

     def main(args=None):
         rclpy.init(args=args)
         talker = Talker()
         rclpy.spin(talker)
         talker.destroy_node()
         rclpy.shutdown()

     if __name__ == '__main__':
         main()
     ```

3. **Create Subscriber Script** (`listener.py`):
   ```bash
   touch listener.py
   ```
   - Edit `listener.py`:
     ```python
     import rclpy
     from rclpy.node import Node
     from std_msgs.msg import String

     class Listener(Node):
         def __init__(self):
             super().__init__('listener')
             self.subscription = self.create_subscription(
                 String,
                 'chatter',
                 self.listener_callback,
                 10)
             self.subscription  # prevent unused variable warning

         def listener_callback(self, msg):
             self.get_logger().info(f'I heard: "{msg.data}"')

     def main(args=None):
         rclpy.init(args=args)
         listener = Listener()
         rclpy.spin(listener)
         listener.destroy_node()
         rclpy.shutdown()

     if __name__ == '__main__':
         main()
     ```

4. **Make Scripts Executable**:
   ```bash
   chmod +x talker.py listener.py
   ```

5. **Update `setup.py`**:
   - Edit `~/ros2_ws/src/my_first_package/setup.py`:
     ```python
     from setuptools import setup

     package_name = 'my_first_package'

     setup(
         name=package_name,
         version='0.0.0',
         packages=[package_name],
         data_files=[
             ('share/ament_index/resource_index/packages',
                 ['resource/' + package_name]),
             ('share/' + package_name, ['package.xml']),
         ],
         install_requires=['setuptools'],
         zip_safe=True,
         maintainer='Your Name',
         maintainer_email='your.email@example.com',
         description='My first ROS 2 package',
         license='Apache License 2.0',
         tests_require=['pytest'],
         entry_points={
             'console_scripts': [
                 'talker = my_first_package.talker:main',
                 'listener = my_first_package.listener:main',
             ],
         },
     )
     ```

6. **Build and Source**:
   ```bash
   cd ~/ros2_ws
   colcon build
   source install/setup.bash
   ```

7. **Run Nodes**:
   - Terminal 1 (Publisher):
     ```bash
     ros2 run my_first_package talker
     ```
   - Terminal 2 (Subscriber):
     ```bash
     ros2 run my_first_package listener
     ```
   - Observe subscriber output: `I heard: "Hello, ROS 2! Count: X"`.

**Troubleshooting**:
- Check topic:
  ```bash
  ros2 topic list
  ```
  - Should show `/chatter`.

---

## 5. Visualizing Data via Topics

**Objective**: Use ROS 2 tools to inspect and visualize topic data.

**Steps**:
1. **Ensure Nodes Are Running**:
   - Keep `talker` and `listener` running.

2. **List Topics**:
   ```bash
   ros2 topic list
   ```
   - Output: `/chatter` (and others like `/parameter_events`).

3. **Inspect Topic Info**:
   ```bash
   ros2 topic info /chatter
   ```
   - Shows publisher/subscriber counts.

4. **Echo Topic Data**:
   ```bash
   ros2 topic echo /chatter
   ```
   - Displays: `data: 'Hello, ROS 2! Count: X'`.

5. **Visualize with `rqt_graph`**:
   - Install `rqt`:
     ```bash
     sudo apt install ros-humble-rqt ros-humble-rqt-common-plugins
     ```
   - Run:
     ```bash
     rqt_graph
     ```
   - Shows `talker` publishing to `/chatter` and `listener` subscribing.

---

## 6. Creating and Using a Custom Message for a Service

**Objective**: Create a custom message and use it in a service.

**Steps**:

1. **Create Custom Message**:
   - Navigate to package:
     ```bash
     cd ~/ros2_ws/src/my_first_package
     ```
   - Create `msg` directory:
     ```bash
     mkdir msg
     ```
   - Create `CustomMessage.msg`:
     ```bash
     touch msg/CustomMessage.msg
     ```
   - Edit:
     ```plaintext
     string name
     int32 count
     ```

2. **Update `package.xml`**:
   - Add:
     ```xml
     <depend>rosidl_default_generators</depend>
     <depend>rosidl_default_runtime</depend>
     <exec_depend>rosidl_default_runtime</exec_depend>
     ```

3. **Update `setup.py` for Messages**:
   - Edit `setup.py`:
     ```python
     from setuptools import setup
     import os
     from glob import glob

     package_name = 'my_first_package'

     setup(
         name=package_name,
         version='0.0.0',
         packages=[package_name],
         data_files=[
             ('share/ament_index/resource_index/packages',
                 ['resource/' + package_name]),
             ('share/' + package_name, ['package.xml']),
             (os.path.join('share', package_name, 'msg'), glob('msg/*.msg')),
         ],
         install_requires=['setuptools'],
         zip_safe=True,
         maintainer='Your Name',
         maintainer_email='your.email@example.com',
         description='My first ROS 2 package',
         license='Apache License 2.0',
         tests_require=['pytest'],
         entry_points={
             'console_scripts': [
                 'talker = my_first_package.talker:main',
                 'listener = my_first_package.listener:main',
             ],
         },
     )
     ```

4. **Create Service Definition**:
   - Create `srv` directory:
     ```bash
     mkdir srv
     ```
   - Create `CustomService.srv`:
     ```bash
     touch srv/CustomService.srv
     ```
   - Edit:
     ```plaintext
     CustomMessage request
     ---
     string response
     ```

5. **Update `setup.py` for Services**:
   - Add to `data_files`:
     ```python
     (os.path.join('share', package_name, 'srv'), glob('srv/*.srv')),
     ```

6. **Create Service Server** (`service_server.py`):
   - Navigate:
     ```bash
     cd ~/ros2_ws/src/my_first_package/my_first_package
     ```
   - Create:
     ```bash
     touch service_server.py
     ```
   - Edit:
     ```python
     import rclpy
     from rclpy.node import Node
     from my_first_package.srv import CustomService

     class ServiceServer(Node):
         def __init__(self):
             super().__init__('service_server')
             self.srv = self.create_service(CustomService, 'custom_service', self.service_callback)

         def service_callback(self, request, response):
             response.response = f"Received: {request.request.name}, Count: {request.request.count}"
             self.get_logger().info(f'Incoming request: name={request.request.name}, count={request.request.count}')
             return response

     def main(args=None):
         rclpy.init(args=args)
         service_server = ServiceServer()
         rclpy.spin(service_server)
         service_server.destroy_node()
         rclpy.shutdown()

     if __name__ == '__main__':
         main()
     ```

7. **Create Service Client** (`service_client.py`):
   - Create:
     ```bash
     touch service_client.py
     ```
   - Edit:
     ```python
     import rclpy
     from rclpy.node import Node
     from my_first_package.srv import CustomService

     class ServiceClient(Node):
         def __init__(self):
             super().__init__('service_client')
             self.client = self.create_client(CustomService, 'custom_service')
             while not self.client.wait_for_service(timeout_sec=1.0):
                 self.get_logger().info('Service not available, waiting...')
             self.req = CustomService.Request()

         def send_request(self, name, count):
             self.req.request.name = name
             self.req.request.count = count
             self.future = self.client.call_async(self.req)
             rclpy.spin_until_future_complete(self, self.future)
             return self.future.result()

     def main(args=None):
         rclpy.init(args=args)
         service_client = ServiceClient()
         response = service_client.send_request('ROS2 Workshop', 42)
         service_client.get_logger().info(f'Result: {response.response}')
         service_client.destroy_node()
         rclpy.shutdown()

     if __name__ == '__main__':
         main()
     ```

8. **Update `setup.py` for New Scripts**:
   - Add to `entry_points`:
     ```python
     entry_points={
         'console_scripts': [
             'talker = my_first_package.talker:main',
             'listener = my_first_package.listener:main',
             'service_server = my_first_package.service_server:main',
             'service_client = my_first_package.service_client:main',
         ],
     }
     ```

9. **Make Scripts Executable**:
   ```bash
   chmod +x service_server.py service_client.py
   ```

10. **Build and Run**:
    ```bash
    cd ~/ros2_ws
    colcon build
    source install/setup.bash
    ```
    - Terminal 1 (Server):
      ```bash
      ros2 run my_first_package service_server
      ```
    - Terminal 2 (Client):
      ```bash
      ros2 run my_first_package service_client
      ```
    - Output: `Result: Received: ROS2 Workshop, Count: 42`.

11. **Verify Service**:
    ```bash
    ros2 service list
    ```
    - Shows `/custom_service`.

**Troubleshooting**:
- Check `package.xml` and `setup.py` for missing dependencies.
- Clear build artifacts:
  ```bash
  rm -rf ~/ros2_ws/build ~/ros2_ws/install ~/ros2_ws/log
  ```

---

## 7. Q&A and Wrap-Up

**Key Takeaways**:
- ROS 2 architecture: nodes, topics, services.
- Workspace and package creation.
- Publisher/subscriber with topics.
- Custom messages and services.

**Next Steps**:
- Explore `geometry_msgs`, `sensor_msgs`.
- Use `ros2 bag` for data recording.
- Try `rviz2` for visualization.

**Resources**:
- [ROS 2 Documentation](https://docs.ros.org/en/humble/)
- [ROS 2 Tutorials](https://docs.ros.org/en/humble/Tutorials.html)
- [ROS Discourse](https://discourse.ros.org/)

---

## Notes

- **Timing**: ~2.5 hours. Adjust by shortening Q&A if needed.
- **Setup**: Use a VM or Docker with ROS 2 pre-installed.
- **Handouts**: Share this README as a PDF.
- **Troubleshooting**:
  - Ensure ROS 2 is sourced.
  - Verify dependencies with `rosdep install`.
