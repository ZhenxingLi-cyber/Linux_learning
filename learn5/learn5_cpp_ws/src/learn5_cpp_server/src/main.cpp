#include "rclcpp/rclcpp.hpp"
#include "learn5_cpp_interface/srv/learn_interface.hpp"

class LearnServerNode : public rclcpp::Node
{
private:
    rclcpp::Service<learn5_cpp_interface::srv::LearnInterface>::SharedPtr service_sptr;
public:
    LearnServerNode(const std::string &name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(),"start_service");
        this->service_sptr=this->create_service<learn5_cpp_interface::srv::LearnInterface>("learn5_cpp_service",
        [&](const learn5_cpp_interface::srv::LearnInterface::Request::SharedPtr request,
            const learn5_cpp_interface::srv::LearnInterface::Response::SharedPtr response)->void 
        {
            RCLCPP_INFO(this->get_logger(),"requested");
            response->l1_norm=0;
            response->l2_norm=0;
        });
    }
};


int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node =std::make_shared<LearnServerNode>("learn5_cpp_server_node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
