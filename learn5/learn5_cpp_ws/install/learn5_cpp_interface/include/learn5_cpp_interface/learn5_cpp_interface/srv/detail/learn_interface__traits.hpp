// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn5_cpp_interface:srv/LearnInterface.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__TRAITS_HPP_
#define LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "learn5_cpp_interface/srv/detail/learn_interface__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace learn5_cpp_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LearnInterface_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
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
  const LearnInterface_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
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

inline std::string to_yaml(const LearnInterface_Request & msg, bool use_flow_style = false)
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

}  // namespace learn5_cpp_interface

namespace rosidl_generator_traits
{

[[deprecated("use learn5_cpp_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learn5_cpp_interface::srv::LearnInterface_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  learn5_cpp_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learn5_cpp_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learn5_cpp_interface::srv::LearnInterface_Request & msg)
{
  return learn5_cpp_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learn5_cpp_interface::srv::LearnInterface_Request>()
{
  return "learn5_cpp_interface::srv::LearnInterface_Request";
}

template<>
inline const char * name<learn5_cpp_interface::srv::LearnInterface_Request>()
{
  return "learn5_cpp_interface/srv/LearnInterface_Request";
}

template<>
struct has_fixed_size<learn5_cpp_interface::srv::LearnInterface_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<learn5_cpp_interface::srv::LearnInterface_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<learn5_cpp_interface::srv::LearnInterface_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace learn5_cpp_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LearnInterface_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: l1_norm
  {
    out << "l1_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_norm, out);
    out << ", ";
  }

  // member: l2_norm
  {
    out << "l2_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_norm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LearnInterface_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: l1_norm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l1_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.l1_norm, out);
    out << "\n";
  }

  // member: l2_norm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_norm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LearnInterface_Response & msg, bool use_flow_style = false)
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

}  // namespace learn5_cpp_interface

namespace rosidl_generator_traits
{

[[deprecated("use learn5_cpp_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learn5_cpp_interface::srv::LearnInterface_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  learn5_cpp_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learn5_cpp_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learn5_cpp_interface::srv::LearnInterface_Response & msg)
{
  return learn5_cpp_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learn5_cpp_interface::srv::LearnInterface_Response>()
{
  return "learn5_cpp_interface::srv::LearnInterface_Response";
}

template<>
inline const char * name<learn5_cpp_interface::srv::LearnInterface_Response>()
{
  return "learn5_cpp_interface/srv/LearnInterface_Response";
}

template<>
struct has_fixed_size<learn5_cpp_interface::srv::LearnInterface_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn5_cpp_interface::srv::LearnInterface_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn5_cpp_interface::srv::LearnInterface_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn5_cpp_interface::srv::LearnInterface>()
{
  return "learn5_cpp_interface::srv::LearnInterface";
}

template<>
inline const char * name<learn5_cpp_interface::srv::LearnInterface>()
{
  return "learn5_cpp_interface/srv/LearnInterface";
}

template<>
struct has_fixed_size<learn5_cpp_interface::srv::LearnInterface>
  : std::integral_constant<
    bool,
    has_fixed_size<learn5_cpp_interface::srv::LearnInterface_Request>::value &&
    has_fixed_size<learn5_cpp_interface::srv::LearnInterface_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn5_cpp_interface::srv::LearnInterface>
  : std::integral_constant<
    bool,
    has_bounded_size<learn5_cpp_interface::srv::LearnInterface_Request>::value &&
    has_bounded_size<learn5_cpp_interface::srv::LearnInterface_Response>::value
  >
{
};

template<>
struct is_service<learn5_cpp_interface::srv::LearnInterface>
  : std::true_type
{
};

template<>
struct is_service_request<learn5_cpp_interface::srv::LearnInterface_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn5_cpp_interface::srv::LearnInterface_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__TRAITS_HPP_
