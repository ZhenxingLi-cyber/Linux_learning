#include "rclcpp/rclcpp.hpp"
#include "learn5_cpp_interface/srv/learn_interface.hpp"
#include <chrono>

class LearnClientNode : public rclcpp::Node
{
private:
    rclcpp::Client<learn5_cpp_interface::srv::LearnInterface>::SharedPtr client_sptr;
    rclcpp::TimerBase::SharedPtr timer_;
public:
    LearnClientNode(const std::string &name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(),"start_client");
        this->client_sptr=this->create_client<learn5_cpp_interface::srv::LearnInterface>("learn5_cpp_service");

        using namespace std::chrono_literals;

        this->timer_=this->create_wall_timer(2000ms,
        [&]()->void 
        {
            while(this->client_sptr->wait_for_service(1s)==false)
            {
                RCLCPP_INFO(this->get_logger(),"waiting");
            }
            auto request=std::make_shared<learn5_cpp_interface::srv::LearnInterface::Request>();
            request->x.push_back(0.1);
            request->x.push_back(0.2);
            request->x.push_back(0.3);
            request->x.push_back(0.4);

            this->client_sptr->async_send_request(request,
            [&](rclcpp::Client<learn5_cpp_interface::srv::LearnInterface>::SharedFuture future)->void
            {
                auto response=future.get();
                std::cout<<(response->l1_norm)<<std::endl;
            });
        });
    }
};


int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node =std::make_shared<LearnClientNode>("learn5_cpp_client_node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}