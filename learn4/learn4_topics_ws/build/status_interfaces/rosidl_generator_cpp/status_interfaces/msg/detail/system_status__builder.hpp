// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from status_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "status_interfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace status_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_net_recv
{
public:
  explicit Init_SystemStatus_net_recv(::status_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::status_interfaces::msg::SystemStatus net_recv(::status_interfaces::msg::SystemStatus::_net_recv_type arg)
  {
    msg_.net_recv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::status_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_net_send
{
public:
  explicit Init_SystemStatus_net_send(::status_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_net_recv net_send(::status_interfaces::msg::SystemStatus::_net_send_type arg)
  {
    msg_.net_send = std::move(arg);
    return Init_SystemStatus_net_recv(msg_);
  }

private:
  ::status_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_available
{
public:
  explicit Init_SystemStatus_memory_available(::status_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_net_send memory_available(::status_interfaces::msg::SystemStatus::_memory_available_type arg)
  {
    msg_.memory_available = std::move(arg);
    return Init_SystemStatus_net_send(msg_);
  }

private:
  ::status_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_total
{
public:
  explicit Init_SystemStatus_memory_total(::status_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_available memory_total(::status_interfaces::msg::SystemStatus::_memory_total_type arg)
  {
    msg_.memory_total = std::move(arg);
    return Init_SystemStatus_memory_available(msg_);
  }

private:
  ::status_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_memory_precentage
{
public:
  explicit Init_SystemStatus_memory_precentage(::status_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_total memory_precentage(::status_interfaces::msg::SystemStatus::_memory_precentage_type arg)
  {
    msg_.memory_precentage = std::move(arg);
    return Init_SystemStatus_memory_total(msg_);
  }

private:
  ::status_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_cpu_precentage
{
public:
  explicit Init_SystemStatus_cpu_precentage(::status_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_memory_precentage cpu_precentage(::status_interfaces::msg::SystemStatus::_cpu_precentage_type arg)
  {
    msg_.cpu_precentage = std::move(arg);
    return Init_SystemStatus_memory_precentage(msg_);
  }

private:
  ::status_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_host_name
{
public:
  explicit Init_SystemStatus_host_name(::status_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_cpu_precentage host_name(::status_interfaces::msg::SystemStatus::_host_name_type arg)
  {
    msg_.host_name = std::move(arg);
    return Init_SystemStatus_cpu_precentage(msg_);
  }

private:
  ::status_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_stamp
{
public:
  Init_SystemStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_host_name stamp(::status_interfaces::msg::SystemStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SystemStatus_host_name(msg_);
  }

private:
  ::status_interfaces::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::status_interfaces::msg::SystemStatus>()
{
  return status_interfaces::msg::builder::Init_SystemStatus_stamp();
}

}  // namespace status_interfaces

#endif  // STATUS_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
