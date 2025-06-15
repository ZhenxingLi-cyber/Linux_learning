// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learn5_interface:srv/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__BUILDER_HPP_
#define LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "learn5_interface/srv/detail/face_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace learn5_interface
{

namespace srv
{

namespace builder
{

class Init_FaceInfo_Request_img
{
public:
  Init_FaceInfo_Request_img()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::learn5_interface::srv::FaceInfo_Request img(::learn5_interface::srv::FaceInfo_Request::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learn5_interface::srv::FaceInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learn5_interface::srv::FaceInfo_Request>()
{
  return learn5_interface::srv::builder::Init_FaceInfo_Request_img();
}

}  // namespace learn5_interface


namespace learn5_interface
{

namespace srv
{

namespace builder
{

class Init_FaceInfo_Response_left
{
public:
  explicit Init_FaceInfo_Response_left(::learn5_interface::srv::FaceInfo_Response & msg)
  : msg_(msg)
  {}
  ::learn5_interface::srv::FaceInfo_Response left(::learn5_interface::srv::FaceInfo_Response::_left_type arg)
  {
    msg_.left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learn5_interface::srv::FaceInfo_Response msg_;
};

class Init_FaceInfo_Response_right
{
public:
  explicit Init_FaceInfo_Response_right(::learn5_interface::srv::FaceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_FaceInfo_Response_left right(::learn5_interface::srv::FaceInfo_Response::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_FaceInfo_Response_left(msg_);
  }

private:
  ::learn5_interface::srv::FaceInfo_Response msg_;
};

class Init_FaceInfo_Response_bottom
{
public:
  explicit Init_FaceInfo_Response_bottom(::learn5_interface::srv::FaceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_FaceInfo_Response_right bottom(::learn5_interface::srv::FaceInfo_Response::_bottom_type arg)
  {
    msg_.bottom = std::move(arg);
    return Init_FaceInfo_Response_right(msg_);
  }

private:
  ::learn5_interface::srv::FaceInfo_Response msg_;
};

class Init_FaceInfo_Response_top
{
public:
  explicit Init_FaceInfo_Response_top(::learn5_interface::srv::FaceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_FaceInfo_Response_bottom top(::learn5_interface::srv::FaceInfo_Response::_top_type arg)
  {
    msg_.top = std::move(arg);
    return Init_FaceInfo_Response_bottom(msg_);
  }

private:
  ::learn5_interface::srv::FaceInfo_Response msg_;
};

class Init_FaceInfo_Response_time_used
{
public:
  explicit Init_FaceInfo_Response_time_used(::learn5_interface::srv::FaceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_FaceInfo_Response_top time_used(::learn5_interface::srv::FaceInfo_Response::_time_used_type arg)
  {
    msg_.time_used = std::move(arg);
    return Init_FaceInfo_Response_top(msg_);
  }

private:
  ::learn5_interface::srv::FaceInfo_Response msg_;
};

class Init_FaceInfo_Response_num
{
public:
  Init_FaceInfo_Response_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceInfo_Response_time_used num(::learn5_interface::srv::FaceInfo_Response::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_FaceInfo_Response_time_used(msg_);
  }

private:
  ::learn5_interface::srv::FaceInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learn5_interface::srv::FaceInfo_Response>()
{
  return learn5_interface::srv::builder::Init_FaceInfo_Response_num();
}

}  // namespace learn5_interface

#endif  // LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__BUILDER_HPP_
