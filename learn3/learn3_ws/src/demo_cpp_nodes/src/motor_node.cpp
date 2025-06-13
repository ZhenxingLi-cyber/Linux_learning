#include "rclcpp/rclcpp.hpp"

class MotorNode : public rclcpp::Node
{
    private:
        std::string name;
        int send_id;
        int rec_id;
    public:
        MotorNode(const std::string &name,int send_id,int rec_id) : Node(name)
        {
            this->send_id=send_id;
            this->rec_id=rec_id;
        }
        void torque_set(float torque);
};

void MotorNode::torque_set(float torque)
{
    RCLCPP_INFO(this->get_logger(),"motor_torque_set");
}

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto motor_node=std::make_shared<MotorNode>("BLDC",200,201);
    motor_node->torque_set(1.2f);
    rclcpp::spin(motor_node);
    rclcpp::shutdown();
    return 0;
}
