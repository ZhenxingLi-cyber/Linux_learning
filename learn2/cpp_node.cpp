#include "rclcpp/rclcpp.hpp"
#include "iostream"

int main(int argc,char** argv)
{
    std::cout<<"num"<<argc<<std::endl;
    std::cout<<"name"<<argv[0]<<std::endl;
    if(argc>=2)
    {
        std::string arg1=argv[1];
        if(arg1=="--help")
        {
            std::cout<<"no fucking help"<<std::endl;
        }
    }

    
    return 0;
}