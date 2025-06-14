// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from learn5_cpp_interface:srv/LearnInterface.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "learn5_cpp_interface/srv/detail/learn_interface__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace learn5_cpp_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void LearnInterface_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) learn5_cpp_interface::srv::LearnInterface_Request(_init);
}

void LearnInterface_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<learn5_cpp_interface::srv::LearnInterface_Request *>(message_memory);
  typed_message->~LearnInterface_Request();
}

size_t size_function__LearnInterface_Request__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LearnInterface_Request__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LearnInterface_Request__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__LearnInterface_Request__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__LearnInterface_Request__x(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__LearnInterface_Request__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__LearnInterface_Request__x(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__LearnInterface_Request__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LearnInterface_Request_message_member_array[1] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn5_cpp_interface::srv::LearnInterface_Request, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__LearnInterface_Request__x,  // size() function pointer
    get_const_function__LearnInterface_Request__x,  // get_const(index) function pointer
    get_function__LearnInterface_Request__x,  // get(index) function pointer
    fetch_function__LearnInterface_Request__x,  // fetch(index, &value) function pointer
    assign_function__LearnInterface_Request__x,  // assign(index, value) function pointer
    resize_function__LearnInterface_Request__x  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LearnInterface_Request_message_members = {
  "learn5_cpp_interface::srv",  // message namespace
  "LearnInterface_Request",  // message name
  1,  // number of fields
  sizeof(learn5_cpp_interface::srv::LearnInterface_Request),
  LearnInterface_Request_message_member_array,  // message members
  LearnInterface_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LearnInterface_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LearnInterface_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LearnInterface_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace learn5_cpp_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<learn5_cpp_interface::srv::LearnInterface_Request>()
{
  return &::learn5_cpp_interface::srv::rosidl_typesupport_introspection_cpp::LearnInterface_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, learn5_cpp_interface, srv, LearnInterface_Request)() {
  return &::learn5_cpp_interface::srv::rosidl_typesupport_introspection_cpp::LearnInterface_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "learn5_cpp_interface/srv/detail/learn_interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace learn5_cpp_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void LearnInterface_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) learn5_cpp_interface::srv::LearnInterface_Response(_init);
}

void LearnInterface_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<learn5_cpp_interface::srv::LearnInterface_Response *>(message_memory);
  typed_message->~LearnInterface_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LearnInterface_Response_message_member_array[2] = {
  {
    "l1_norm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn5_cpp_interface::srv::LearnInterface_Response, l1_norm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l2_norm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn5_cpp_interface::srv::LearnInterface_Response, l2_norm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LearnInterface_Response_message_members = {
  "learn5_cpp_interface::srv",  // message namespace
  "LearnInterface_Response",  // message name
  2,  // number of fields
  sizeof(learn5_cpp_interface::srv::LearnInterface_Response),
  LearnInterface_Response_message_member_array,  // message members
  LearnInterface_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LearnInterface_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LearnInterface_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LearnInterface_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace learn5_cpp_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<learn5_cpp_interface::srv::LearnInterface_Response>()
{
  return &::learn5_cpp_interface::srv::rosidl_typesupport_introspection_cpp::LearnInterface_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, learn5_cpp_interface, srv, LearnInterface_Response)() {
  return &::learn5_cpp_interface::srv::rosidl_typesupport_introspection_cpp::LearnInterface_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "learn5_cpp_interface/srv/detail/learn_interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace learn5_cpp_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers LearnInterface_service_members = {
  "learn5_cpp_interface::srv",  // service namespace
  "LearnInterface",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<learn5_cpp_interface::srv::LearnInterface>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t LearnInterface_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LearnInterface_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace learn5_cpp_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<learn5_cpp_interface::srv::LearnInterface>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::learn5_cpp_interface::srv::rosidl_typesupport_introspection_cpp::LearnInterface_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::learn5_cpp_interface::srv::LearnInterface_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::learn5_cpp_interface::srv::LearnInterface_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, learn5_cpp_interface, srv, LearnInterface)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<learn5_cpp_interface::srv::LearnInterface>();
}

#ifdef __cplusplus
}
#endif
