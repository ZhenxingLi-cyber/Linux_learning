import face_recognition # type: ignore
import cv2
from ament_index_python.packages import get_package_share_directory



import rclpy
from learn5_interface.srv import FaceInfo

def main():
    #/home/uadmin/learning/learn5/learn5_ws/install/learn5_service/share/learn5_service
    img_path=get_package_share_directory('learn5_service')+'/'+'resource/image.png'
    print(f'true path: {img_path}')
    img=cv2.imread(img_path)
    cv2.imshow('faces',img)
    cv2.waitKey(0)
