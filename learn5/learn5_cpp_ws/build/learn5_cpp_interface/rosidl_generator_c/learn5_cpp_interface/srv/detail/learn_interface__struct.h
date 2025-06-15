// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learn5_cpp_interface:srv/LearnInterface.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__STRUCT_H_
#define LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/LearnInterface in the package learn5_cpp_interface.
typedef struct learn5_cpp_interface__srv__LearnInterface_Request
{
  rosidl_runtime_c__float__Sequence x;
} learn5_cpp_interface__srv__LearnInterface_Request;

// Struct for a sequence of learn5_cpp_interface__srv__LearnInterface_Request.
typedef struct learn5_cpp_interface__srv__LearnInterface_Request__Sequence
{
  learn5_cpp_interface__srv__LearnInterface_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learn5_cpp_interface__srv__LearnInterface_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/LearnInterface in the package learn5_cpp_interface.
typedef struct learn5_cpp_interface__srv__LearnInterface_Response
{
  float l1_norm;
  float l2_norm;
} learn5_cpp_interface__srv__LearnInterface_Response;

// Struct for a sequence of learn5_cpp_interface__srv__LearnInterface_Response.
typedef struct learn5_cpp_interface__srv__LearnInterface_Response__Sequence
{
  learn5_cpp_interface__srv__LearnInterface_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learn5_cpp_interface__srv__LearnInterface_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARN5_CPP_INTERFACE__SRV__DETAIL__LEARN_INTERFACE__STRUCT_H_
