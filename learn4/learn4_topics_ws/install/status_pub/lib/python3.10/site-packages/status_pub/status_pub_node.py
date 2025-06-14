import rclpy
from status_interfaces.msg import SystemStatus
from rclpy.node import Node
import psutil
import platform

class StatusPubNode(Node):
    def __init__(self,node_name):
        super().__init__(node_name)
        self.status_puber=self.create_publisher(SystemStatus,"status_pub_info",10)
        self.timer_=self.create_timer(1,self.timer_callback)

    def timer_callback(self):
        cpu_precentage=psutil.cpu_percent()
        mem_info=psutil.virtual_memory()
        net_io_counters=psutil.net_io_counters()
        '''
        builtin_interfaces/Time stamp#时间戳
        string host_name 
        float32 cpu_precentage
        float32 memory_precentage
        float32 memory_total
        float32 memory_available
        float64 net_send
        float64 net_recv
        '''
        msg=SystemStatus()
        msg.stamp = self.get_clock().now().to_msg()
        msg.host_name=platform.node()
        msg.cpu_precentage=cpu_precentage
        msg.memory_precentage=mem_info.percent/1024/1024
        msg.memory_total=mem_info.total/1024/1024
        msg.memory_available=mem_info.available/1024/1024
        msg.net_send=net_io_counters.bytes_sent/1024/1024
        msg.net_recv=net_io_counters.bytes_recv/1024/1024

        self.get_logger().info(f'发布{str(msg)}')
        self.status_puber.publish(msg)
def main():
    rclpy.init()
    node=StatusPubNode("status_pub_node")
    rclpy.spin(node)
    rclpy.shutdown()