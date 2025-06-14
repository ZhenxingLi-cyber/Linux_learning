#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <chrono>
#include "turtlesim/msg/pose.hpp"

class TurtleCMDNode : public rclcpp::Node
{
    private:
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
        rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_;
        // rclcpp::TimerBase::SharedPtr timer_;
    public:
        TurtleCMDNode(const std::string &name) : Node(name)
        {
            this->publisher_=this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel",10);
            // using namespace std::chrono_literals;
            // this->timer_=this->create_wall_timer(1000ms,std::bind(&TurtleCMDNode::turtle_cmd_callback,this));
            this->subscriber_=this->create_subscription<turtlesim::msg::Pose>("turtle1/pose",10,
            std::bind(&TurtleCMDNode::turtle_rec_callback,this,std::placeholders::_1));
        }
        void turtle_cmd_callback();
        void turtle_rec_callback(const turtlesim::msg::Pose::SharedPtr pose);

};

void TurtleCMDNode::turtle_cmd_callback()
{
    auto msg=geometry_msgs::msg::Twist();
    msg.linear.x=-2;
    msg.angular.z=2;
    publisher_->publish(msg);
}

void TurtleCMDNode::turtle_rec_callback(const turtlesim::msg::Pose::SharedPtr pose)
{
    std::string str_pose="current pose is \n x:"
                            +std::to_string(pose.get()->x)
                            +"\n y:"
                            +std::to_string(pose.get()->y)
                            +"\n theta"
                            +std::to_string(pose.get()->theta);

    RCLCPP_INFO(this->get_logger(),str_pose.c_str());

    auto msg=geometry_msgs::msg::Twist();
    msg.linear.x=-2;
    msg.angular.z=2;
    publisher_->publish(msg);
}

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto turtle_cmd_node_ptr=std::make_shared<TurtleCMDNode>("turtle_cmd_node");
    rclcpp::spin(turtle_cmd_node_ptr);
    rclcpp::shutdown();
    return 0;
}
