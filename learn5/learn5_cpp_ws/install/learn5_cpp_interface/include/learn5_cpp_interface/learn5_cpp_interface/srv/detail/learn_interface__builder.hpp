// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learn5_cpp_interface:srv/LearnInterface.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__BUILDER_HPP_
#define LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "learn5_cpp_interface/srv/detail/learn_interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace learn5_cpp_interface
{

namespace srv
{

namespace builder
{

class Init_LearnInterface_Request_x
{
public:
  Init_LearnInterface_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::learn5_cpp_interface::srv::LearnInterface_Request x(::learn5_cpp_interface::srv::LearnInterface_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learn5_cpp_interface::srv::LearnInterface_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learn5_cpp_interface::srv::LearnInterface_Request>()
{
  return learn5_cpp_interface::srv::builder::Init_LearnInterface_Request_x();
}

}  // namespace learn5_cpp_interface


namespace learn5_cpp_interface
{

namespace srv
{

namespace builder
{

class Init_LearnInterface_Response_l2_norm
{
public:
  explicit Init_LearnInterface_Response_l2_norm(::learn5_cpp_interface::srv::LearnInterface_Response & msg)
  : msg_(msg)
  {}
  ::learn5_cpp_interface::srv::LearnInterface_Response l2_norm(::learn5_cpp_interface::srv::LearnInterface_Response::_l2_norm_type arg)
  {
    msg_.l2_norm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learn5_cpp_interface::srv::LearnInterface_Response msg_;
};

class Init_LearnInterface_Response_l1_norm
{
public:
  Init_LearnInterface_Response_l1_norm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LearnInterface_Response_l2_norm l1_norm(::learn5_cpp_interface::srv::LearnInterface_Response::_l1_norm_type arg)
  {
    msg_.l1_norm = std::move(arg);
    return Init_LearnInterface_Response_l2_norm(msg_);
  }

private:
  ::learn5_cpp_interface::srv::LearnInterface_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learn5_cpp_interface::srv::LearnInterface_Response>()
{
  return learn5_cpp_interface::srv::builder::Init_LearnInterface_Response_l1_norm();
}

}  // namespace learn5_cpp_interface

#endif  // LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__BUILDER_HPP_
