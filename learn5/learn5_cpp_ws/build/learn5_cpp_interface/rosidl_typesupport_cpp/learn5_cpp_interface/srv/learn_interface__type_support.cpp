// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from learn5_cpp_interface:srv/LearnInterface.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "learn5_cpp_interface/srv/detail/learn_interface__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace learn5_cpp_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LearnInterface_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LearnInterface_Request_type_support_ids_t;

static const _LearnInterface_Request_type_support_ids_t _LearnInterface_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LearnInterface_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LearnInterface_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LearnInterface_Request_type_support_symbol_names_t _LearnInterface_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, learn5_cpp_interface, srv, LearnInterface_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, learn5_cpp_interface, srv, LearnInterface_Request)),
  }
};

typedef struct _LearnInterface_Request_type_support_data_t
{
  void * data[2];
} _LearnInterface_Request_type_support_data_t;

static _LearnInterface_Request_type_support_data_t _LearnInterface_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LearnInterface_Request_message_typesupport_map = {
  2,
  "learn5_cpp_interface",
  &_LearnInterface_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LearnInterface_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LearnInterface_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LearnInterface_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LearnInterface_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace learn5_cpp_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<learn5_cpp_interface::srv::LearnInterface_Request>()
{
  return &::learn5_cpp_interface::srv::rosidl_typesupport_cpp::LearnInterface_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, learn5_cpp_interface, srv, LearnInterface_Request)() {
  return get_message_type_support_handle<learn5_cpp_interface::srv::LearnInterface_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "learn5_cpp_interface/srv/detail/learn_interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace learn5_cpp_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LearnInterface_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LearnInterface_Response_type_support_ids_t;

static const _LearnInterface_Response_type_support_ids_t _LearnInterface_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LearnInterface_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LearnInterface_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LearnInterface_Response_type_support_symbol_names_t _LearnInterface_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, learn5_cpp_interface, srv, LearnInterface_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, learn5_cpp_interface, srv, LearnInterface_Response)),
  }
};

typedef struct _LearnInterface_Response_type_support_data_t
{
  void * data[2];
} _LearnInterface_Response_type_support_data_t;

static _LearnInterface_Response_type_support_data_t _LearnInterface_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LearnInterface_Response_message_typesupport_map = {
  2,
  "learn5_cpp_interface",
  &_LearnInterface_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LearnInterface_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LearnInterface_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LearnInterface_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LearnInterface_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace learn5_cpp_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<learn5_cpp_interface::srv::LearnInterface_Response>()
{
  return &::learn5_cpp_interface::srv::rosidl_typesupport_cpp::LearnInterface_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, learn5_cpp_interface, srv, LearnInterface_Response)() {
  return get_message_type_support_handle<learn5_cpp_interface::srv::LearnInterface_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "learn5_cpp_interface/srv/detail/learn_interface__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace learn5_cpp_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LearnInterface_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LearnInterface_type_support_ids_t;

static const _LearnInterface_type_support_ids_t _LearnInterface_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LearnInterface_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LearnInterface_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LearnInterface_type_support_symbol_names_t _LearnInterface_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, learn5_cpp_interface, srv, LearnInterface)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, learn5_cpp_interface, srv, LearnInterface)),
  }
};

typedef struct _LearnInterface_type_support_data_t
{
  void * data[2];
} _LearnInterface_type_support_data_t;

static _LearnInterface_type_support_data_t _LearnInterface_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LearnInterface_service_typesupport_map = {
  2,
  "learn5_cpp_interface",
  &_LearnInterface_service_typesupport_ids.typesupport_identifier[0],
  &_LearnInterface_service_typesupport_symbol_names.symbol_name[0],
  &_LearnInterface_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LearnInterface_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LearnInterface_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace learn5_cpp_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<learn5_cpp_interface::srv::LearnInterface>()
{
  return &::learn5_cpp_interface::srv::rosidl_typesupport_cpp::LearnInterface_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, learn5_cpp_interface, srv, LearnInterface)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<learn5_cpp_interface::srv::LearnInterface>();
}

#ifdef __cplusplus
}
#endif
