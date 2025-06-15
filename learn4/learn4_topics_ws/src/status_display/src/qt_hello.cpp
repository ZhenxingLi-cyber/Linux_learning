#include <QApplication>
#include <QLabel>
#include <QString>
#include "rclcpp/rclcpp.hpp"
#include "status_interfaces/msg/system_status.hpp"

class QtDisplayNode : public rclcpp::Node
{
private:
    rclcpp::Subscription<status_interfaces::msg::SystemStatus>::SharedPtr subscriber_;
    
public:
    QtDisplayNode(const std::string &name):Node(name)
    {
        this->subscriber_=this->create_subscription<status_interfaces::msg::SystemStatus>("status_pub_info",10,
            std::bind(&QtDisplayNode::status_rec_callback,this,std::placeholders::_1));
    }
    void status_rec_callback(const status_interfaces::msg::SystemStatus sys_status);
};

void QtDisplayNode::status_rec_callback(const status_interfaces::msg::SystemStatus sys_status)
{
    std::string str_sys_status="current sys_status is";
    RCLCPP_INFO(this->get_logger(),str_sys_status.c_str());
}

int main(int argc,char** argv)
{
    // QApplication app(argc,argv);
    // QLabel* Label1=new QLabel();
    // QString message=QString::fromStdString("hello qt");
    // Label1->setText(message);
    // Label1->show();
    // app.exec();
    rclcpp::init(argc,argv);
    auto node = std::make_shared<QtDisplayNode>("qt_display_node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}