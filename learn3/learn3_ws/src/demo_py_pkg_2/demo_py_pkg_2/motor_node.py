import rclpy
from rclpy.node import Node

class MotorNode(Node):
    def __init__(self,name:str,price:float) -> None:
        self.name=name
        self.price=price
        super().__init__(name)
    def torque_output(self,torque:float):
        """
        sb 
        """
        print("fake motor")
        self.get_logger().info(f"{self.name}, torque output")

def main():
    rclpy.init()
    motor_node=MotorNode("BLDC",998.0)
    motor_node.torque_output(1.5)
    rclpy.spin(motor_node)
    rclpy.shutdown()
    