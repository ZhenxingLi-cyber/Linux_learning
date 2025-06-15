import face_recognition # type: ignore
import cv2
from ament_index_python.packages import get_package_share_directory
import rclpy
from learn5_interface.srv import FaceInfo
from rclpy.node import Node
from cv_bridge import CvBridge
import time

class FaceRecogNode(Node):
    def __init__(self,name):
        super().__init__(name)
        self.service=self.create_service(FaceInfo,"face_recognition",self.service_callback)
        self.bridge=CvBridge()
        self.number_of_times_to_upsample=1
        self.model='hog'
        self.get_logger().info('服务启动！~~')
    def service_callback(self,request,response):
        if request.img.data:
            self.get_logger().info('合法数据')
            start_time=time.time()
            img=self.bridge.imgmsg_to_cv2(request.img)
            face_locations=face_recognition.face_locations(img,
                                                          number_of_times_to_upsample=self.number_of_times_to_upsample,
                                                          model=self.model)
            response.time_used=time.time()-start_time
            response.num=len(face_locations)
            for top,right,bottom,left in face_locations:
                response.top.append(top)
                response.right.append(right)
                response.bottom.append(bottom)
                response.left.append(left)
        else:
            self.get_logger().info('非法数据')
            # start_time=time.time()
            # img_path=get_package_share_directory('learn5_service')+'/'+'resource/image.png'
            # print(f'true path: {img_path}')
            # img=cv2.imread(img_path)
            # # img=CvBridge.imgmsg_to_cv2(request.img)
            # face_locations=face_recognition.face_locations(img,
            #                                               number_of_times_to_upsample=self.number_of_times_to_upsample,
            #                                               model=self.model)
            # response.time_used=time.time()-start_time
            # response.num=len(face_locations)
            # for top,right,bottom,left in face_locations:
            #     response.top.append(top)
            #     response.right.append(right)
            #     response.bottom.append(bottom)
            #     response.left.append(left)
            response.time_used=0
            response.num=0
            response.top.append(0)
            response.right.append(0)
            response.bottom.append(0)
            response.left.append(0)
        return response #necessary

def main():
    rclpy.init()
    node=FaceRecogNode("face_recog_node")
    rclpy.spin(node)
    rclpy.shutdown()
    # #/home/uadmin/learning/learn5/learn5_ws/install/learn5_service/share/learn5_service
    # img_path=get_package_share_directory('learn5_service')+'/'+'resource/image.png'
    # print(f'true path: {img_path}')
    # img=cv2.imread(img_path)
    # face_location=face_recognition.face_locations(img,number_of_times_to_upsample=1,model='hog')
    # for top,right,bottom,left in face_location:
    #     cv2.rectangle(img,(left,top),(right,bottom),(0,0,255),4)
    # cv2.imshow('faces',img)
    # cv2.waitKey(0)
