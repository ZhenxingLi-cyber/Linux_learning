// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn5_interface:srv/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__TRAITS_HPP_
#define LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "learn5_interface/srv/detail/face_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace learn5_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const FaceInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: img
  {
    out << "img: ";
    to_flow_style_yaml(msg.img, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaceInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_block_style_yaml(msg.img, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace learn5_interface

namespace rosidl_generator_traits
{

[[deprecated("use learn5_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learn5_interface::srv::FaceInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  learn5_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learn5_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learn5_interface::srv::FaceInfo_Request & msg)
{
  return learn5_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learn5_interface::srv::FaceInfo_Request>()
{
  return "learn5_interface::srv::FaceInfo_Request";
}

template<>
inline const char * name<learn5_interface::srv::FaceInfo_Request>()
{
  return "learn5_interface/srv/FaceInfo_Request";
}

template<>
struct has_fixed_size<learn5_interface::srv::FaceInfo_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<learn5_interface::srv::FaceInfo_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<learn5_interface::srv::FaceInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace learn5_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const FaceInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << ", ";
  }

  // member: time_used
  {
    out << "time_used: ";
    rosidl_generator_traits::value_to_yaml(msg.time_used, out);
    out << ", ";
  }

  // member: top
  {
    if (msg.top.size() == 0) {
      out << "top: []";
    } else {
      out << "top: [";
      size_t pending_items = msg.top.size();
      for (auto item : msg.top) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bottom
  {
    if (msg.bottom.size() == 0) {
      out << "bottom: []";
    } else {
      out << "bottom: [";
      size_t pending_items = msg.bottom.size();
      for (auto item : msg.bottom) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right
  {
    if (msg.right.size() == 0) {
      out << "right: []";
    } else {
      out << "right: [";
      size_t pending_items = msg.right.size();
      for (auto item : msg.right) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left
  {
    if (msg.left.size() == 0) {
      out << "left: []";
    } else {
      out << "left: [";
      size_t pending_items = msg.left.size();
      for (auto item : msg.left) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaceInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }

  // member: time_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_used: ";
    rosidl_generator_traits::value_to_yaml(msg.time_used, out);
    out << "\n";
  }

  // member: top
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.top.size() == 0) {
      out << "top: []\n";
    } else {
      out << "top:\n";
      for (auto item : msg.top) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bottom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bottom.size() == 0) {
      out << "bottom: []\n";
    } else {
      out << "bottom:\n";
      for (auto item : msg.bottom) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right.size() == 0) {
      out << "right: []\n";
    } else {
      out << "right:\n";
      for (auto item : msg.right) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left.size() == 0) {
      out << "left: []\n";
    } else {
      out << "left:\n";
      for (auto item : msg.left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace learn5_interface

namespace rosidl_generator_traits
{

[[deprecated("use learn5_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learn5_interface::srv::FaceInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  learn5_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learn5_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learn5_interface::srv::FaceInfo_Response & msg)
{
  return learn5_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learn5_interface::srv::FaceInfo_Response>()
{
  return "learn5_interface::srv::FaceInfo_Response";
}

template<>
inline const char * name<learn5_interface::srv::FaceInfo_Response>()
{
  return "learn5_interface/srv/FaceInfo_Response";
}

template<>
struct has_fixed_size<learn5_interface::srv::FaceInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<learn5_interface::srv::FaceInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<learn5_interface::srv::FaceInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn5_interface::srv::FaceInfo>()
{
  return "learn5_interface::srv::FaceInfo";
}

template<>
inline const char * name<learn5_interface::srv::FaceInfo>()
{
  return "learn5_interface/srv/FaceInfo";
}

template<>
struct has_fixed_size<learn5_interface::srv::FaceInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<learn5_interface::srv::FaceInfo_Request>::value &&
    has_fixed_size<learn5_interface::srv::FaceInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn5_interface::srv::FaceInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<learn5_interface::srv::FaceInfo_Request>::value &&
    has_bounded_size<learn5_interface::srv::FaceInfo_Response>::value
  >
{
};

template<>
struct is_service<learn5_interface::srv::FaceInfo>
  : std::true_type
{
};

template<>
struct is_service_request<learn5_interface::srv::FaceInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn5_interface::srv::FaceInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__TRAITS_HPP_
