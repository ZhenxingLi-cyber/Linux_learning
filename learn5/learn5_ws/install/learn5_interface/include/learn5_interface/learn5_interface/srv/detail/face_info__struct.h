// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learn5_interface:srv/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__STRUCT_H_
#define LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/FaceInfo in the package learn5_interface.
typedef struct learn5_interface__srv__FaceInfo_Request
{
  sensor_msgs__msg__Image img;
} learn5_interface__srv__FaceInfo_Request;

// Struct for a sequence of learn5_interface__srv__FaceInfo_Request.
typedef struct learn5_interface__srv__FaceInfo_Request__Sequence
{
  learn5_interface__srv__FaceInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learn5_interface__srv__FaceInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'top'
// Member 'bottom'
// Member 'right'
// Member 'left'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/FaceInfo in the package learn5_interface.
typedef struct learn5_interface__srv__FaceInfo_Response
{
  int16_t num;
  float time_used;
  rosidl_runtime_c__int32__Sequence top;
  rosidl_runtime_c__int32__Sequence bottom;
  rosidl_runtime_c__int32__Sequence right;
  rosidl_runtime_c__int32__Sequence left;
} learn5_interface__srv__FaceInfo_Response;

// Struct for a sequence of learn5_interface__srv__FaceInfo_Response.
typedef struct learn5_interface__srv__FaceInfo_Response__Sequence
{
  learn5_interface__srv__FaceInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learn5_interface__srv__FaceInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__STRUCT_H_
