// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from learn5_interface:srv/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__FUNCTIONS_H_
#define LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "learn5_interface/msg/rosidl_generator_c__visibility_control.h"

#include "learn5_interface/srv/detail/face_info__struct.h"

/// Initialize srv/FaceInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * learn5_interface__srv__FaceInfo_Request
 * )) before or use
 * learn5_interface__srv__FaceInfo_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Request__init(learn5_interface__srv__FaceInfo_Request * msg);

/// Finalize srv/FaceInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
void
learn5_interface__srv__FaceInfo_Request__fini(learn5_interface__srv__FaceInfo_Request * msg);

/// Create srv/FaceInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * learn5_interface__srv__FaceInfo_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
learn5_interface__srv__FaceInfo_Request *
learn5_interface__srv__FaceInfo_Request__create();

/// Destroy srv/FaceInfo message.
/**
 * It calls
 * learn5_interface__srv__FaceInfo_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
void
learn5_interface__srv__FaceInfo_Request__destroy(learn5_interface__srv__FaceInfo_Request * msg);

/// Check for srv/FaceInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Request__are_equal(const learn5_interface__srv__FaceInfo_Request * lhs, const learn5_interface__srv__FaceInfo_Request * rhs);

/// Copy a srv/FaceInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Request__copy(
  const learn5_interface__srv__FaceInfo_Request * input,
  learn5_interface__srv__FaceInfo_Request * output);

/// Initialize array of srv/FaceInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * learn5_interface__srv__FaceInfo_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Request__Sequence__init(learn5_interface__srv__FaceInfo_Request__Sequence * array, size_t size);

/// Finalize array of srv/FaceInfo messages.
/**
 * It calls
 * learn5_interface__srv__FaceInfo_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
void
learn5_interface__srv__FaceInfo_Request__Sequence__fini(learn5_interface__srv__FaceInfo_Request__Sequence * array);

/// Create array of srv/FaceInfo messages.
/**
 * It allocates the memory for the array and calls
 * learn5_interface__srv__FaceInfo_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
learn5_interface__srv__FaceInfo_Request__Sequence *
learn5_interface__srv__FaceInfo_Request__Sequence__create(size_t size);

/// Destroy array of srv/FaceInfo messages.
/**
 * It calls
 * learn5_interface__srv__FaceInfo_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
void
learn5_interface__srv__FaceInfo_Request__Sequence__destroy(learn5_interface__srv__FaceInfo_Request__Sequence * array);

/// Check for srv/FaceInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Request__Sequence__are_equal(const learn5_interface__srv__FaceInfo_Request__Sequence * lhs, const learn5_interface__srv__FaceInfo_Request__Sequence * rhs);

/// Copy an array of srv/FaceInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Request__Sequence__copy(
  const learn5_interface__srv__FaceInfo_Request__Sequence * input,
  learn5_interface__srv__FaceInfo_Request__Sequence * output);

/// Initialize srv/FaceInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * learn5_interface__srv__FaceInfo_Response
 * )) before or use
 * learn5_interface__srv__FaceInfo_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Response__init(learn5_interface__srv__FaceInfo_Response * msg);

/// Finalize srv/FaceInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
void
learn5_interface__srv__FaceInfo_Response__fini(learn5_interface__srv__FaceInfo_Response * msg);

/// Create srv/FaceInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * learn5_interface__srv__FaceInfo_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
learn5_interface__srv__FaceInfo_Response *
learn5_interface__srv__FaceInfo_Response__create();

/// Destroy srv/FaceInfo message.
/**
 * It calls
 * learn5_interface__srv__FaceInfo_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
void
learn5_interface__srv__FaceInfo_Response__destroy(learn5_interface__srv__FaceInfo_Response * msg);

/// Check for srv/FaceInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Response__are_equal(const learn5_interface__srv__FaceInfo_Response * lhs, const learn5_interface__srv__FaceInfo_Response * rhs);

/// Copy a srv/FaceInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Response__copy(
  const learn5_interface__srv__FaceInfo_Response * input,
  learn5_interface__srv__FaceInfo_Response * output);

/// Initialize array of srv/FaceInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * learn5_interface__srv__FaceInfo_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Response__Sequence__init(learn5_interface__srv__FaceInfo_Response__Sequence * array, size_t size);

/// Finalize array of srv/FaceInfo messages.
/**
 * It calls
 * learn5_interface__srv__FaceInfo_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
void
learn5_interface__srv__FaceInfo_Response__Sequence__fini(learn5_interface__srv__FaceInfo_Response__Sequence * array);

/// Create array of srv/FaceInfo messages.
/**
 * It allocates the memory for the array and calls
 * learn5_interface__srv__FaceInfo_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
learn5_interface__srv__FaceInfo_Response__Sequence *
learn5_interface__srv__FaceInfo_Response__Sequence__create(size_t size);

/// Destroy array of srv/FaceInfo messages.
/**
 * It calls
 * learn5_interface__srv__FaceInfo_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
void
learn5_interface__srv__FaceInfo_Response__Sequence__destroy(learn5_interface__srv__FaceInfo_Response__Sequence * array);

/// Check for srv/FaceInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Response__Sequence__are_equal(const learn5_interface__srv__FaceInfo_Response__Sequence * lhs, const learn5_interface__srv__FaceInfo_Response__Sequence * rhs);

/// Copy an array of srv/FaceInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn5_interface
bool
learn5_interface__srv__FaceInfo_Response__Sequence__copy(
  const learn5_interface__srv__FaceInfo_Response__Sequence * input,
  learn5_interface__srv__FaceInfo_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEARN5_INTERFACE__SRV__DETAIL__FACE_INFO__FUNCTIONS_H_
