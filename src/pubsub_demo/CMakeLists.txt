cmake_minimum_required(VERSION 3.8)
project(pubsub_demo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate custom interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/CustomMessage.msg"
  "srv/CustomService.srv"
  DEPENDENCIES std_msgs
)

# Install Python executables
install(PROGRAMS
  scripts/talker.py
  scripts/listener.py
  scripts/client.py
  scripts/server.py
  DESTINATION lib/${PROJECT_NAME}
)

# Install resource files
install(DIRECTORY
  resource/
  DESTINATION share/${PROJECT_NAME}/
)

# Testing
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
