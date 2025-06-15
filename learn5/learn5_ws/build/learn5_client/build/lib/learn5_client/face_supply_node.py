import rclpy
from rclpy.node import Node
from learn5_interface.srv import FaceInfo
import os
from ament_index_python.packages import get_package_share_directory
from cv_bridge import CvBridge
import cv2

class FaceRecogClientNode(Node):
    def __init__(self,name):
        super().__init__(name)
        self.client_=self.create_client(FaceInfo,'face_recognition')
        self.default_img_path=os.path.join(get_package_share_directory('learn5_client'),'resource/image.png')
        self.bridge=CvBridge()
        self.img_cv=cv2.imread(self.default_img_path)
        # self.img_msg=self.bridge.cv2_to_imgmsg(self.img_cv)
        self.get_logger().info('客户端已经启动')

    def send_request(self):
        while self.client_.wait_for_service(0.5) is False:
            self.get_logger().info("waiting for server")
        request=FaceInfo.Request()
        
        request.img=self.bridge.cv2_to_imgmsg(self.img_cv)
        future = self.client_.call_async(request)
        rclpy.spin_until_future_complete(self,future)
        response=future.result()
        self.get_logger().info('客户端响应')
        print(f'图像中{response.num}个人脸')
        img_cv=self.img_cv
        for i in range(response.num):
            cv2.rectangle(img_cv,(response.left[i],response.top[i]),(response.right[i],response.bottom[i]),(0,255,0),4)
        cv2.imshow('faces',img_cv)
        cv2.waitKey(0)

def main():
    rclpy.init()
    node = FaceRecogClientNode('face_recog_client_node')
    node.send_request()
    rclpy.spin(node)
    rclpy.shutdown()