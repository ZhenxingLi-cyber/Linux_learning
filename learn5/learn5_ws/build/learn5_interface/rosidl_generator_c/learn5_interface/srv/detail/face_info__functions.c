// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learn5_interface:srv/FaceInfo.idl
// generated code does not contain a copyright notice
#include "learn5_interface/srv/detail/face_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `img`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
learn5_interface__srv__FaceInfo_Request__init(learn5_interface__srv__FaceInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__init(&msg->img)) {
    learn5_interface__srv__FaceInfo_Request__fini(msg);
    return false;
  }
  return true;
}

void
learn5_interface__srv__FaceInfo_Request__fini(learn5_interface__srv__FaceInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // img
  sensor_msgs__msg__Image__fini(&msg->img);
}

bool
learn5_interface__srv__FaceInfo_Request__are_equal(const learn5_interface__srv__FaceInfo_Request * lhs, const learn5_interface__srv__FaceInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->img), &(rhs->img)))
  {
    return false;
  }
  return true;
}

bool
learn5_interface__srv__FaceInfo_Request__copy(
  const learn5_interface__srv__FaceInfo_Request * input,
  learn5_interface__srv__FaceInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__copy(
      &(input->img), &(output->img)))
  {
    return false;
  }
  return true;
}

learn5_interface__srv__FaceInfo_Request *
learn5_interface__srv__FaceInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn5_interface__srv__FaceInfo_Request * msg = (learn5_interface__srv__FaceInfo_Request *)allocator.allocate(sizeof(learn5_interface__srv__FaceInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn5_interface__srv__FaceInfo_Request));
  bool success = learn5_interface__srv__FaceInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learn5_interface__srv__FaceInfo_Request__destroy(learn5_interface__srv__FaceInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learn5_interface__srv__FaceInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learn5_interface__srv__FaceInfo_Request__Sequence__init(learn5_interface__srv__FaceInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn5_interface__srv__FaceInfo_Request * data = NULL;

  if (size) {
    data = (learn5_interface__srv__FaceInfo_Request *)allocator.zero_allocate(size, sizeof(learn5_interface__srv__FaceInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn5_interface__srv__FaceInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn5_interface__srv__FaceInfo_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn5_interface__srv__FaceInfo_Request__Sequence__fini(learn5_interface__srv__FaceInfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn5_interface__srv__FaceInfo_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn5_interface__srv__FaceInfo_Request__Sequence *
learn5_interface__srv__FaceInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn5_interface__srv__FaceInfo_Request__Sequence * array = (learn5_interface__srv__FaceInfo_Request__Sequence *)allocator.allocate(sizeof(learn5_interface__srv__FaceInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learn5_interface__srv__FaceInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learn5_interface__srv__FaceInfo_Request__Sequence__destroy(learn5_interface__srv__FaceInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learn5_interface__srv__FaceInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learn5_interface__srv__FaceInfo_Request__Sequence__are_equal(const learn5_interface__srv__FaceInfo_Request__Sequence * lhs, const learn5_interface__srv__FaceInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learn5_interface__srv__FaceInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learn5_interface__srv__FaceInfo_Request__Sequence__copy(
  const learn5_interface__srv__FaceInfo_Request__Sequence * input,
  learn5_interface__srv__FaceInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learn5_interface__srv__FaceInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learn5_interface__srv__FaceInfo_Request * data =
      (learn5_interface__srv__FaceInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learn5_interface__srv__FaceInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learn5_interface__srv__FaceInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learn5_interface__srv__FaceInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `top`
// Member `bottom`
// Member `right`
// Member `left`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
learn5_interface__srv__FaceInfo_Response__init(learn5_interface__srv__FaceInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // num
  // time_used
  // top
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->top, 0)) {
    learn5_interface__srv__FaceInfo_Response__fini(msg);
    return false;
  }
  // bottom
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->bottom, 0)) {
    learn5_interface__srv__FaceInfo_Response__fini(msg);
    return false;
  }
  // right
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->right, 0)) {
    learn5_interface__srv__FaceInfo_Response__fini(msg);
    return false;
  }
  // left
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->left, 0)) {
    learn5_interface__srv__FaceInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
learn5_interface__srv__FaceInfo_Response__fini(learn5_interface__srv__FaceInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // num
  // time_used
  // top
  rosidl_runtime_c__int32__Sequence__fini(&msg->top);
  // bottom
  rosidl_runtime_c__int32__Sequence__fini(&msg->bottom);
  // right
  rosidl_runtime_c__int32__Sequence__fini(&msg->right);
  // left
  rosidl_runtime_c__int32__Sequence__fini(&msg->left);
}

bool
learn5_interface__srv__FaceInfo_Response__are_equal(const learn5_interface__srv__FaceInfo_Response * lhs, const learn5_interface__srv__FaceInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  // time_used
  if (lhs->time_used != rhs->time_used) {
    return false;
  }
  // top
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->top), &(rhs->top)))
  {
    return false;
  }
  // bottom
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->bottom), &(rhs->bottom)))
  {
    return false;
  }
  // right
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->right), &(rhs->right)))
  {
    return false;
  }
  // left
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->left), &(rhs->left)))
  {
    return false;
  }
  return true;
}

bool
learn5_interface__srv__FaceInfo_Response__copy(
  const learn5_interface__srv__FaceInfo_Response * input,
  learn5_interface__srv__FaceInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // num
  output->num = input->num;
  // time_used
  output->time_used = input->time_used;
  // top
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->top), &(output->top)))
  {
    return false;
  }
  // bottom
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->bottom), &(output->bottom)))
  {
    return false;
  }
  // right
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->right), &(output->right)))
  {
    return false;
  }
  // left
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->left), &(output->left)))
  {
    return false;
  }
  return true;
}

learn5_interface__srv__FaceInfo_Response *
learn5_interface__srv__FaceInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn5_interface__srv__FaceInfo_Response * msg = (learn5_interface__srv__FaceInfo_Response *)allocator.allocate(sizeof(learn5_interface__srv__FaceInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn5_interface__srv__FaceInfo_Response));
  bool success = learn5_interface__srv__FaceInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learn5_interface__srv__FaceInfo_Response__destroy(learn5_interface__srv__FaceInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learn5_interface__srv__FaceInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learn5_interface__srv__FaceInfo_Response__Sequence__init(learn5_interface__srv__FaceInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn5_interface__srv__FaceInfo_Response * data = NULL;

  if (size) {
    data = (learn5_interface__srv__FaceInfo_Response *)allocator.zero_allocate(size, sizeof(learn5_interface__srv__FaceInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn5_interface__srv__FaceInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn5_interface__srv__FaceInfo_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn5_interface__srv__FaceInfo_Response__Sequence__fini(learn5_interface__srv__FaceInfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn5_interface__srv__FaceInfo_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn5_interface__srv__FaceInfo_Response__Sequence *
learn5_interface__srv__FaceInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn5_interface__srv__FaceInfo_Response__Sequence * array = (learn5_interface__srv__FaceInfo_Response__Sequence *)allocator.allocate(sizeof(learn5_interface__srv__FaceInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learn5_interface__srv__FaceInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learn5_interface__srv__FaceInfo_Response__Sequence__destroy(learn5_interface__srv__FaceInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learn5_interface__srv__FaceInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learn5_interface__srv__FaceInfo_Response__Sequence__are_equal(const learn5_interface__srv__FaceInfo_Response__Sequence * lhs, const learn5_interface__srv__FaceInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learn5_interface__srv__FaceInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learn5_interface__srv__FaceInfo_Response__Sequence__copy(
  const learn5_interface__srv__FaceInfo_Response__Sequence * input,
  learn5_interface__srv__FaceInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learn5_interface__srv__FaceInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learn5_interface__srv__FaceInfo_Response * data =
      (learn5_interface__srv__FaceInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learn5_interface__srv__FaceInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learn5_interface__srv__FaceInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learn5_interface__srv__FaceInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
