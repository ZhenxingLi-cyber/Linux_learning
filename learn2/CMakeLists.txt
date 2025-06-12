cmake_minimum_required(VERSION 3.8)
project(CPP_NODE)
add_executable(cpp_node cpp_node.cpp)

find_package(rclcpp REQUIRED)
#${rclcpp_INCLUDE_DIRS} ${rclcpp_LIBRARIES}
target_include_directories(cpp_node PUBLIC ${rclcpp_INCLUDE_DIRS})
target_link_libraries(cpp_node ${rclcpp_LIBRARIES})
