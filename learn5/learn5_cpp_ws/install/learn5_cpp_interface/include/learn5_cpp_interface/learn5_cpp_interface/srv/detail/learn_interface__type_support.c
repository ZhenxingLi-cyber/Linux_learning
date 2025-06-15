// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from learn5_cpp_interface:srv/LearnInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "learn5_cpp_interface/srv/detail/learn_interface__rosidl_typesupport_introspection_c.h"
#include "learn5_cpp_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "learn5_cpp_interface/srv/detail/learn_interface__functions.h"
#include "learn5_cpp_interface/srv/detail/learn_interface__struct.h"


// Include directives for member types
// Member `x`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learn5_cpp_interface__srv__LearnInterface_Request__init(message_memory);
}

void learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_fini_function(void * message_memory)
{
  learn5_cpp_interface__srv__LearnInterface_Request__fini(message_memory);
}

size_t learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__size_function__LearnInterface_Request__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__get_const_function__LearnInterface_Request__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__get_function__LearnInterface_Request__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__fetch_function__LearnInterface_Request__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__get_const_function__LearnInterface_Request__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__assign_function__LearnInterface_Request__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__get_function__LearnInterface_Request__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__resize_function__LearnInterface_Request__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_message_member_array[1] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn5_cpp_interface__srv__LearnInterface_Request, x),  // bytes offset in struct
    NULL,  // default value
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__size_function__LearnInterface_Request__x,  // size() function pointer
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__get_const_function__LearnInterface_Request__x,  // get_const(index) function pointer
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__get_function__LearnInterface_Request__x,  // get(index) function pointer
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__fetch_function__LearnInterface_Request__x,  // fetch(index, &value) function pointer
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__assign_function__LearnInterface_Request__x,  // assign(index, value) function pointer
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__resize_function__LearnInterface_Request__x  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_message_members = {
  "learn5_cpp_interface__srv",  // message namespace
  "LearnInterface_Request",  // message name
  1,  // number of fields
  sizeof(learn5_cpp_interface__srv__LearnInterface_Request),
  learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_message_member_array,  // message members
  learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_message_type_support_handle = {
  0,
  &learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learn5_cpp_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn5_cpp_interface, srv, LearnInterface_Request)() {
  if (!learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_message_type_support_handle.typesupport_identifier) {
    learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learn5_cpp_interface__srv__LearnInterface_Request__rosidl_typesupport_introspection_c__LearnInterface_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "learn5_cpp_interface/srv/detail/learn_interface__rosidl_typesupport_introspection_c.h"
// already included above
// #include "learn5_cpp_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "learn5_cpp_interface/srv/detail/learn_interface__functions.h"
// already included above
// #include "learn5_cpp_interface/srv/detail/learn_interface__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learn5_cpp_interface__srv__LearnInterface_Response__init(message_memory);
}

void learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_fini_function(void * message_memory)
{
  learn5_cpp_interface__srv__LearnInterface_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_message_member_array[2] = {
  {
    "l1_norm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn5_cpp_interface__srv__LearnInterface_Response, l1_norm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l2_norm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn5_cpp_interface__srv__LearnInterface_Response, l2_norm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_message_members = {
  "learn5_cpp_interface__srv",  // message namespace
  "LearnInterface_Response",  // message name
  2,  // number of fields
  sizeof(learn5_cpp_interface__srv__LearnInterface_Response),
  learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_message_member_array,  // message members
  learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_message_type_support_handle = {
  0,
  &learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learn5_cpp_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn5_cpp_interface, srv, LearnInterface_Response)() {
  if (!learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_message_type_support_handle.typesupport_identifier) {
    learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learn5_cpp_interface__srv__LearnInterface_Response__rosidl_typesupport_introspection_c__LearnInterface_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "learn5_cpp_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "learn5_cpp_interface/srv/detail/learn_interface__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_service_members = {
  "learn5_cpp_interface__srv",  // service namespace
  "LearnInterface",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_Request_message_type_support_handle,
  NULL  // response message
  // learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_Response_message_type_support_handle
};

static rosidl_service_type_support_t learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_service_type_support_handle = {
  0,
  &learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn5_cpp_interface, srv, LearnInterface_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn5_cpp_interface, srv, LearnInterface_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learn5_cpp_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn5_cpp_interface, srv, LearnInterface)() {
  if (!learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_service_type_support_handle.typesupport_identifier) {
    learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn5_cpp_interface, srv, LearnInterface_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn5_cpp_interface, srv, LearnInterface_Response)()->data;
  }

  return &learn5_cpp_interface__srv__detail__learn_interface__rosidl_typesupport_introspection_c__LearnInterface_service_type_support_handle;
}
