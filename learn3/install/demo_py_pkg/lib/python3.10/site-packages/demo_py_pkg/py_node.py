import rclpy
from rclpy.node import Node

def main():
    rclpy.init()
    node = Node("py_node")
    node.get_logger().info("hello py_node")
    rclpy.spin(node)
    rclpy.shutdown();