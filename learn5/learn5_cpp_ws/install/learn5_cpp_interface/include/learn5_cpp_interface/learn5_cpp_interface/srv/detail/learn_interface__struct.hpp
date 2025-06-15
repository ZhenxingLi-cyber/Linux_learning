// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from learn5_cpp_interface:srv/LearnInterface.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__STRUCT_HPP_
#define LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__learn5_cpp_interface__srv__LearnInterface_Request __attribute__((deprecated))
#else
# define DEPRECATED__learn5_cpp_interface__srv__LearnInterface_Request __declspec(deprecated)
#endif

namespace learn5_cpp_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LearnInterface_Request_
{
  using Type = LearnInterface_Request_<ContainerAllocator>;

  explicit LearnInterface_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LearnInterface_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_type x;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learn5_cpp_interface__srv__LearnInterface_Request
    std::shared_ptr<learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learn5_cpp_interface__srv__LearnInterface_Request
    std::shared_ptr<learn5_cpp_interface::srv::LearnInterface_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LearnInterface_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    return true;
  }
  bool operator!=(const LearnInterface_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LearnInterface_Request_

// alias to use template instance with default allocator
using LearnInterface_Request =
  learn5_cpp_interface::srv::LearnInterface_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace learn5_cpp_interface


#ifndef _WIN32
# define DEPRECATED__learn5_cpp_interface__srv__LearnInterface_Response __attribute__((deprecated))
#else
# define DEPRECATED__learn5_cpp_interface__srv__LearnInterface_Response __declspec(deprecated)
#endif

namespace learn5_cpp_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LearnInterface_Response_
{
  using Type = LearnInterface_Response_<ContainerAllocator>;

  explicit LearnInterface_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l1_norm = 0.0f;
      this->l2_norm = 0.0f;
    }
  }

  explicit LearnInterface_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l1_norm = 0.0f;
      this->l2_norm = 0.0f;
    }
  }

  // field types and members
  using _l1_norm_type =
    float;
  _l1_norm_type l1_norm;
  using _l2_norm_type =
    float;
  _l2_norm_type l2_norm;

  // setters for named parameter idiom
  Type & set__l1_norm(
    const float & _arg)
  {
    this->l1_norm = _arg;
    return *this;
  }
  Type & set__l2_norm(
    const float & _arg)
  {
    this->l2_norm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learn5_cpp_interface__srv__LearnInterface_Response
    std::shared_ptr<learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learn5_cpp_interface__srv__LearnInterface_Response
    std::shared_ptr<learn5_cpp_interface::srv::LearnInterface_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LearnInterface_Response_ & other) const
  {
    if (this->l1_norm != other.l1_norm) {
      return false;
    }
    if (this->l2_norm != other.l2_norm) {
      return false;
    }
    return true;
  }
  bool operator!=(const LearnInterface_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LearnInterface_Response_

// alias to use template instance with default allocator
using LearnInterface_Response =
  learn5_cpp_interface::srv::LearnInterface_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace learn5_cpp_interface

namespace learn5_cpp_interface
{

namespace srv
{

struct LearnInterface
{
  using Request = learn5_cpp_interface::srv::LearnInterface_Request;
  using Response = learn5_cpp_interface::srv::LearnInterface_Response;
};

}  // namespace srv

}  // namespace learn5_cpp_interface

#endif  // LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__STRUCT_HPP_
