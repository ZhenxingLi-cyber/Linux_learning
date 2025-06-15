// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from learn5_interface:srv/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__STRUCT_HPP_
#define LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__learn5_interface__srv__FaceInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__learn5_interface__srv__FaceInfo_Request __declspec(deprecated)
#endif

namespace learn5_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceInfo_Request_
{
  using Type = FaceInfo_Request_<ContainerAllocator>;

  explicit FaceInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_init)
  {
    (void)_init;
  }

  explicit FaceInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;

  // setters for named parameter idiom
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learn5_interface::srv::FaceInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const learn5_interface::srv::FaceInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learn5_interface::srv::FaceInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learn5_interface::srv::FaceInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learn5_interface::srv::FaceInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learn5_interface::srv::FaceInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learn5_interface::srv::FaceInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learn5_interface::srv::FaceInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learn5_interface::srv::FaceInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learn5_interface::srv::FaceInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learn5_interface__srv__FaceInfo_Request
    std::shared_ptr<learn5_interface::srv::FaceInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learn5_interface__srv__FaceInfo_Request
    std::shared_ptr<learn5_interface::srv::FaceInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceInfo_Request_ & other) const
  {
    if (this->img != other.img) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceInfo_Request_

// alias to use template instance with default allocator
using FaceInfo_Request =
  learn5_interface::srv::FaceInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace learn5_interface


#ifndef _WIN32
# define DEPRECATED__learn5_interface__srv__FaceInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__learn5_interface__srv__FaceInfo_Response __declspec(deprecated)
#endif

namespace learn5_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FaceInfo_Response_
{
  using Type = FaceInfo_Response_<ContainerAllocator>;

  explicit FaceInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0;
      this->time_used = 0.0f;
    }
  }

  explicit FaceInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0;
      this->time_used = 0.0f;
    }
  }

  // field types and members
  using _num_type =
    int16_t;
  _num_type num;
  using _time_used_type =
    float;
  _time_used_type time_used;
  using _top_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _top_type top;
  using _bottom_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _bottom_type bottom;
  using _right_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _right_type right;
  using _left_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _left_type left;

  // setters for named parameter idiom
  Type & set__num(
    const int16_t & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__time_used(
    const float & _arg)
  {
    this->time_used = _arg;
    return *this;
  }
  Type & set__top(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->top = _arg;
    return *this;
  }
  Type & set__bottom(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->bottom = _arg;
    return *this;
  }
  Type & set__right(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__left(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->left = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    learn5_interface::srv::FaceInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const learn5_interface::srv::FaceInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<learn5_interface::srv::FaceInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<learn5_interface::srv::FaceInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      learn5_interface::srv::FaceInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<learn5_interface::srv::FaceInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      learn5_interface::srv::FaceInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<learn5_interface::srv::FaceInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<learn5_interface::srv::FaceInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<learn5_interface::srv::FaceInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__learn5_interface__srv__FaceInfo_Response
    std::shared_ptr<learn5_interface::srv::FaceInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__learn5_interface__srv__FaceInfo_Response
    std::shared_ptr<learn5_interface::srv::FaceInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceInfo_Response_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    if (this->time_used != other.time_used) {
      return false;
    }
    if (this->top != other.top) {
      return false;
    }
    if (this->bottom != other.bottom) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceInfo_Response_

// alias to use template instance with default allocator
using FaceInfo_Response =
  learn5_interface::srv::FaceInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace learn5_interface

namespace learn5_interface
{

namespace srv
{

struct FaceInfo
{
  using Request = learn5_interface::srv::FaceInfo_Request;
  using Response = learn5_interface::srv::FaceInfo_Response;
};

}  // namespace srv

}  // namespace learn5_interface

#endif  // LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__STRUCT_HPP_
