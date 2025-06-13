import rclpy
from demo_py_pkg_2.motor_node import MotorNode

class M3508Node(MotorNode):
    def __init__(self, name: str, price: float) -> None:
        super().__init__(name, price)
        print("a m3508 created")
    def angle_fbk(self):
        print("no fucking angle")
    
def main():
    rclpy.init()
    m3508_node=M3508Node("m3508_1",998.0)
    m3508_node.torque_output(1.5)
    m3508_node.angle_fbk()
    rclpy.spin(m3508_node)
    rclpy.shutdown()
