// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_interfaces:action/FollowPath.idl
// generated code does not contain a copyright notice
#include "control_interfaces/action/detail/follow_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoints`
#include "geometry_msgs/msg/detail/pose_array__functions.h"

bool
control_interfaces__action__FollowPath_Goal__init(control_interfaces__action__FollowPath_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseArray__init(&msg->waypoints)) {
    control_interfaces__action__FollowPath_Goal__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__FollowPath_Goal__fini(control_interfaces__action__FollowPath_Goal * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  geometry_msgs__msg__PoseArray__fini(&msg->waypoints);
}

bool
control_interfaces__action__FollowPath_Goal__are_equal(const control_interfaces__action__FollowPath_Goal * lhs, const control_interfaces__action__FollowPath_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseArray__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__action__FollowPath_Goal__copy(
  const control_interfaces__action__FollowPath_Goal * input,
  control_interfaces__action__FollowPath_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__PoseArray__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

control_interfaces__action__FollowPath_Goal *
control_interfaces__action__FollowPath_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Goal * msg = (control_interfaces__action__FollowPath_Goal *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__FollowPath_Goal));
  bool success = control_interfaces__action__FollowPath_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__FollowPath_Goal__destroy(control_interfaces__action__FollowPath_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__action__FollowPath_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__action__FollowPath_Goal__Sequence__init(control_interfaces__action__FollowPath_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Goal * data = NULL;

  if (size) {
    data = (control_interfaces__action__FollowPath_Goal *)allocator.zero_allocate(size, sizeof(control_interfaces__action__FollowPath_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__FollowPath_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__FollowPath_Goal__fini(&data[i - 1]);
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
control_interfaces__action__FollowPath_Goal__Sequence__fini(control_interfaces__action__FollowPath_Goal__Sequence * array)
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
      control_interfaces__action__FollowPath_Goal__fini(&array->data[i]);
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

control_interfaces__action__FollowPath_Goal__Sequence *
control_interfaces__action__FollowPath_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Goal__Sequence * array = (control_interfaces__action__FollowPath_Goal__Sequence *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__FollowPath_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__FollowPath_Goal__Sequence__destroy(control_interfaces__action__FollowPath_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__action__FollowPath_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__action__FollowPath_Goal__Sequence__are_equal(const control_interfaces__action__FollowPath_Goal__Sequence * lhs, const control_interfaces__action__FollowPath_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__action__FollowPath_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__action__FollowPath_Goal__Sequence__copy(
  const control_interfaces__action__FollowPath_Goal__Sequence * input,
  control_interfaces__action__FollowPath_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__action__FollowPath_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__action__FollowPath_Goal * data =
      (control_interfaces__action__FollowPath_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__action__FollowPath_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__action__FollowPath_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__action__FollowPath_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `success`
#include "std_msgs/msg/detail/bool__functions.h"

bool
control_interfaces__action__FollowPath_Result__init(control_interfaces__action__FollowPath_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  if (!std_msgs__msg__Bool__init(&msg->success)) {
    control_interfaces__action__FollowPath_Result__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__FollowPath_Result__fini(control_interfaces__action__FollowPath_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  std_msgs__msg__Bool__fini(&msg->success);
}

bool
control_interfaces__action__FollowPath_Result__are_equal(const control_interfaces__action__FollowPath_Result * lhs, const control_interfaces__action__FollowPath_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->success), &(rhs->success)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__action__FollowPath_Result__copy(
  const control_interfaces__action__FollowPath_Result * input,
  control_interfaces__action__FollowPath_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  if (!std_msgs__msg__Bool__copy(
      &(input->success), &(output->success)))
  {
    return false;
  }
  return true;
}

control_interfaces__action__FollowPath_Result *
control_interfaces__action__FollowPath_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Result * msg = (control_interfaces__action__FollowPath_Result *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__FollowPath_Result));
  bool success = control_interfaces__action__FollowPath_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__FollowPath_Result__destroy(control_interfaces__action__FollowPath_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__action__FollowPath_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__action__FollowPath_Result__Sequence__init(control_interfaces__action__FollowPath_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Result * data = NULL;

  if (size) {
    data = (control_interfaces__action__FollowPath_Result *)allocator.zero_allocate(size, sizeof(control_interfaces__action__FollowPath_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__FollowPath_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__FollowPath_Result__fini(&data[i - 1]);
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
control_interfaces__action__FollowPath_Result__Sequence__fini(control_interfaces__action__FollowPath_Result__Sequence * array)
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
      control_interfaces__action__FollowPath_Result__fini(&array->data[i]);
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

control_interfaces__action__FollowPath_Result__Sequence *
control_interfaces__action__FollowPath_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Result__Sequence * array = (control_interfaces__action__FollowPath_Result__Sequence *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__FollowPath_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__FollowPath_Result__Sequence__destroy(control_interfaces__action__FollowPath_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__action__FollowPath_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__action__FollowPath_Result__Sequence__are_equal(const control_interfaces__action__FollowPath_Result__Sequence * lhs, const control_interfaces__action__FollowPath_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__action__FollowPath_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__action__FollowPath_Result__Sequence__copy(
  const control_interfaces__action__FollowPath_Result__Sequence * input,
  control_interfaces__action__FollowPath_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__action__FollowPath_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__action__FollowPath_Result * data =
      (control_interfaces__action__FollowPath_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__action__FollowPath_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__action__FollowPath_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__action__FollowPath_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
control_interfaces__action__FollowPath_Feedback__init(control_interfaces__action__FollowPath_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  return true;
}

void
control_interfaces__action__FollowPath_Feedback__fini(control_interfaces__action__FollowPath_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
}

bool
control_interfaces__action__FollowPath_Feedback__are_equal(const control_interfaces__action__FollowPath_Feedback * lhs, const control_interfaces__action__FollowPath_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
control_interfaces__action__FollowPath_Feedback__copy(
  const control_interfaces__action__FollowPath_Feedback * input,
  control_interfaces__action__FollowPath_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  output->progress = input->progress;
  return true;
}

control_interfaces__action__FollowPath_Feedback *
control_interfaces__action__FollowPath_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Feedback * msg = (control_interfaces__action__FollowPath_Feedback *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__FollowPath_Feedback));
  bool success = control_interfaces__action__FollowPath_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__FollowPath_Feedback__destroy(control_interfaces__action__FollowPath_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__action__FollowPath_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__action__FollowPath_Feedback__Sequence__init(control_interfaces__action__FollowPath_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Feedback * data = NULL;

  if (size) {
    data = (control_interfaces__action__FollowPath_Feedback *)allocator.zero_allocate(size, sizeof(control_interfaces__action__FollowPath_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__FollowPath_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__FollowPath_Feedback__fini(&data[i - 1]);
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
control_interfaces__action__FollowPath_Feedback__Sequence__fini(control_interfaces__action__FollowPath_Feedback__Sequence * array)
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
      control_interfaces__action__FollowPath_Feedback__fini(&array->data[i]);
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

control_interfaces__action__FollowPath_Feedback__Sequence *
control_interfaces__action__FollowPath_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_Feedback__Sequence * array = (control_interfaces__action__FollowPath_Feedback__Sequence *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__FollowPath_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__FollowPath_Feedback__Sequence__destroy(control_interfaces__action__FollowPath_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__action__FollowPath_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__action__FollowPath_Feedback__Sequence__are_equal(const control_interfaces__action__FollowPath_Feedback__Sequence * lhs, const control_interfaces__action__FollowPath_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__action__FollowPath_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__action__FollowPath_Feedback__Sequence__copy(
  const control_interfaces__action__FollowPath_Feedback__Sequence * input,
  control_interfaces__action__FollowPath_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__action__FollowPath_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__action__FollowPath_Feedback * data =
      (control_interfaces__action__FollowPath_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__action__FollowPath_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__action__FollowPath_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__action__FollowPath_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "control_interfaces/action/detail/follow_path__functions.h"

bool
control_interfaces__action__FollowPath_SendGoal_Request__init(control_interfaces__action__FollowPath_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_interfaces__action__FollowPath_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!control_interfaces__action__FollowPath_Goal__init(&msg->goal)) {
    control_interfaces__action__FollowPath_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__FollowPath_SendGoal_Request__fini(control_interfaces__action__FollowPath_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  control_interfaces__action__FollowPath_Goal__fini(&msg->goal);
}

bool
control_interfaces__action__FollowPath_SendGoal_Request__are_equal(const control_interfaces__action__FollowPath_SendGoal_Request * lhs, const control_interfaces__action__FollowPath_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!control_interfaces__action__FollowPath_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__action__FollowPath_SendGoal_Request__copy(
  const control_interfaces__action__FollowPath_SendGoal_Request * input,
  control_interfaces__action__FollowPath_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!control_interfaces__action__FollowPath_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

control_interfaces__action__FollowPath_SendGoal_Request *
control_interfaces__action__FollowPath_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_SendGoal_Request * msg = (control_interfaces__action__FollowPath_SendGoal_Request *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__FollowPath_SendGoal_Request));
  bool success = control_interfaces__action__FollowPath_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__FollowPath_SendGoal_Request__destroy(control_interfaces__action__FollowPath_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__action__FollowPath_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__action__FollowPath_SendGoal_Request__Sequence__init(control_interfaces__action__FollowPath_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_SendGoal_Request * data = NULL;

  if (size) {
    data = (control_interfaces__action__FollowPath_SendGoal_Request *)allocator.zero_allocate(size, sizeof(control_interfaces__action__FollowPath_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__FollowPath_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__FollowPath_SendGoal_Request__fini(&data[i - 1]);
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
control_interfaces__action__FollowPath_SendGoal_Request__Sequence__fini(control_interfaces__action__FollowPath_SendGoal_Request__Sequence * array)
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
      control_interfaces__action__FollowPath_SendGoal_Request__fini(&array->data[i]);
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

control_interfaces__action__FollowPath_SendGoal_Request__Sequence *
control_interfaces__action__FollowPath_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_SendGoal_Request__Sequence * array = (control_interfaces__action__FollowPath_SendGoal_Request__Sequence *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__FollowPath_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__FollowPath_SendGoal_Request__Sequence__destroy(control_interfaces__action__FollowPath_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__action__FollowPath_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__action__FollowPath_SendGoal_Request__Sequence__are_equal(const control_interfaces__action__FollowPath_SendGoal_Request__Sequence * lhs, const control_interfaces__action__FollowPath_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__action__FollowPath_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__action__FollowPath_SendGoal_Request__Sequence__copy(
  const control_interfaces__action__FollowPath_SendGoal_Request__Sequence * input,
  control_interfaces__action__FollowPath_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__action__FollowPath_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__action__FollowPath_SendGoal_Request * data =
      (control_interfaces__action__FollowPath_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__action__FollowPath_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__action__FollowPath_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__action__FollowPath_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
control_interfaces__action__FollowPath_SendGoal_Response__init(control_interfaces__action__FollowPath_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    control_interfaces__action__FollowPath_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__FollowPath_SendGoal_Response__fini(control_interfaces__action__FollowPath_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
control_interfaces__action__FollowPath_SendGoal_Response__are_equal(const control_interfaces__action__FollowPath_SendGoal_Response * lhs, const control_interfaces__action__FollowPath_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__action__FollowPath_SendGoal_Response__copy(
  const control_interfaces__action__FollowPath_SendGoal_Response * input,
  control_interfaces__action__FollowPath_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

control_interfaces__action__FollowPath_SendGoal_Response *
control_interfaces__action__FollowPath_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_SendGoal_Response * msg = (control_interfaces__action__FollowPath_SendGoal_Response *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__FollowPath_SendGoal_Response));
  bool success = control_interfaces__action__FollowPath_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__FollowPath_SendGoal_Response__destroy(control_interfaces__action__FollowPath_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__action__FollowPath_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__action__FollowPath_SendGoal_Response__Sequence__init(control_interfaces__action__FollowPath_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_SendGoal_Response * data = NULL;

  if (size) {
    data = (control_interfaces__action__FollowPath_SendGoal_Response *)allocator.zero_allocate(size, sizeof(control_interfaces__action__FollowPath_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__FollowPath_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__FollowPath_SendGoal_Response__fini(&data[i - 1]);
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
control_interfaces__action__FollowPath_SendGoal_Response__Sequence__fini(control_interfaces__action__FollowPath_SendGoal_Response__Sequence * array)
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
      control_interfaces__action__FollowPath_SendGoal_Response__fini(&array->data[i]);
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

control_interfaces__action__FollowPath_SendGoal_Response__Sequence *
control_interfaces__action__FollowPath_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_SendGoal_Response__Sequence * array = (control_interfaces__action__FollowPath_SendGoal_Response__Sequence *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__FollowPath_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__FollowPath_SendGoal_Response__Sequence__destroy(control_interfaces__action__FollowPath_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__action__FollowPath_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__action__FollowPath_SendGoal_Response__Sequence__are_equal(const control_interfaces__action__FollowPath_SendGoal_Response__Sequence * lhs, const control_interfaces__action__FollowPath_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__action__FollowPath_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__action__FollowPath_SendGoal_Response__Sequence__copy(
  const control_interfaces__action__FollowPath_SendGoal_Response__Sequence * input,
  control_interfaces__action__FollowPath_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__action__FollowPath_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__action__FollowPath_SendGoal_Response * data =
      (control_interfaces__action__FollowPath_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__action__FollowPath_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__action__FollowPath_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__action__FollowPath_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
control_interfaces__action__FollowPath_GetResult_Request__init(control_interfaces__action__FollowPath_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_interfaces__action__FollowPath_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__FollowPath_GetResult_Request__fini(control_interfaces__action__FollowPath_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
control_interfaces__action__FollowPath_GetResult_Request__are_equal(const control_interfaces__action__FollowPath_GetResult_Request * lhs, const control_interfaces__action__FollowPath_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__action__FollowPath_GetResult_Request__copy(
  const control_interfaces__action__FollowPath_GetResult_Request * input,
  control_interfaces__action__FollowPath_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

control_interfaces__action__FollowPath_GetResult_Request *
control_interfaces__action__FollowPath_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_GetResult_Request * msg = (control_interfaces__action__FollowPath_GetResult_Request *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__FollowPath_GetResult_Request));
  bool success = control_interfaces__action__FollowPath_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__FollowPath_GetResult_Request__destroy(control_interfaces__action__FollowPath_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__action__FollowPath_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__action__FollowPath_GetResult_Request__Sequence__init(control_interfaces__action__FollowPath_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_GetResult_Request * data = NULL;

  if (size) {
    data = (control_interfaces__action__FollowPath_GetResult_Request *)allocator.zero_allocate(size, sizeof(control_interfaces__action__FollowPath_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__FollowPath_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__FollowPath_GetResult_Request__fini(&data[i - 1]);
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
control_interfaces__action__FollowPath_GetResult_Request__Sequence__fini(control_interfaces__action__FollowPath_GetResult_Request__Sequence * array)
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
      control_interfaces__action__FollowPath_GetResult_Request__fini(&array->data[i]);
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

control_interfaces__action__FollowPath_GetResult_Request__Sequence *
control_interfaces__action__FollowPath_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_GetResult_Request__Sequence * array = (control_interfaces__action__FollowPath_GetResult_Request__Sequence *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__FollowPath_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__FollowPath_GetResult_Request__Sequence__destroy(control_interfaces__action__FollowPath_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__action__FollowPath_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__action__FollowPath_GetResult_Request__Sequence__are_equal(const control_interfaces__action__FollowPath_GetResult_Request__Sequence * lhs, const control_interfaces__action__FollowPath_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__action__FollowPath_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__action__FollowPath_GetResult_Request__Sequence__copy(
  const control_interfaces__action__FollowPath_GetResult_Request__Sequence * input,
  control_interfaces__action__FollowPath_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__action__FollowPath_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__action__FollowPath_GetResult_Request * data =
      (control_interfaces__action__FollowPath_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__action__FollowPath_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__action__FollowPath_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__action__FollowPath_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "control_interfaces/action/detail/follow_path__functions.h"

bool
control_interfaces__action__FollowPath_GetResult_Response__init(control_interfaces__action__FollowPath_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!control_interfaces__action__FollowPath_Result__init(&msg->result)) {
    control_interfaces__action__FollowPath_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__FollowPath_GetResult_Response__fini(control_interfaces__action__FollowPath_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  control_interfaces__action__FollowPath_Result__fini(&msg->result);
}

bool
control_interfaces__action__FollowPath_GetResult_Response__are_equal(const control_interfaces__action__FollowPath_GetResult_Response * lhs, const control_interfaces__action__FollowPath_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!control_interfaces__action__FollowPath_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__action__FollowPath_GetResult_Response__copy(
  const control_interfaces__action__FollowPath_GetResult_Response * input,
  control_interfaces__action__FollowPath_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!control_interfaces__action__FollowPath_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

control_interfaces__action__FollowPath_GetResult_Response *
control_interfaces__action__FollowPath_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_GetResult_Response * msg = (control_interfaces__action__FollowPath_GetResult_Response *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__FollowPath_GetResult_Response));
  bool success = control_interfaces__action__FollowPath_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__FollowPath_GetResult_Response__destroy(control_interfaces__action__FollowPath_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__action__FollowPath_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__action__FollowPath_GetResult_Response__Sequence__init(control_interfaces__action__FollowPath_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_GetResult_Response * data = NULL;

  if (size) {
    data = (control_interfaces__action__FollowPath_GetResult_Response *)allocator.zero_allocate(size, sizeof(control_interfaces__action__FollowPath_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__FollowPath_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__FollowPath_GetResult_Response__fini(&data[i - 1]);
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
control_interfaces__action__FollowPath_GetResult_Response__Sequence__fini(control_interfaces__action__FollowPath_GetResult_Response__Sequence * array)
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
      control_interfaces__action__FollowPath_GetResult_Response__fini(&array->data[i]);
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

control_interfaces__action__FollowPath_GetResult_Response__Sequence *
control_interfaces__action__FollowPath_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_GetResult_Response__Sequence * array = (control_interfaces__action__FollowPath_GetResult_Response__Sequence *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__FollowPath_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__FollowPath_GetResult_Response__Sequence__destroy(control_interfaces__action__FollowPath_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__action__FollowPath_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__action__FollowPath_GetResult_Response__Sequence__are_equal(const control_interfaces__action__FollowPath_GetResult_Response__Sequence * lhs, const control_interfaces__action__FollowPath_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__action__FollowPath_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__action__FollowPath_GetResult_Response__Sequence__copy(
  const control_interfaces__action__FollowPath_GetResult_Response__Sequence * input,
  control_interfaces__action__FollowPath_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__action__FollowPath_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__action__FollowPath_GetResult_Response * data =
      (control_interfaces__action__FollowPath_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__action__FollowPath_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__action__FollowPath_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__action__FollowPath_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "control_interfaces/action/detail/follow_path__functions.h"

bool
control_interfaces__action__FollowPath_FeedbackMessage__init(control_interfaces__action__FollowPath_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_interfaces__action__FollowPath_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!control_interfaces__action__FollowPath_Feedback__init(&msg->feedback)) {
    control_interfaces__action__FollowPath_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
control_interfaces__action__FollowPath_FeedbackMessage__fini(control_interfaces__action__FollowPath_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  control_interfaces__action__FollowPath_Feedback__fini(&msg->feedback);
}

bool
control_interfaces__action__FollowPath_FeedbackMessage__are_equal(const control_interfaces__action__FollowPath_FeedbackMessage * lhs, const control_interfaces__action__FollowPath_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!control_interfaces__action__FollowPath_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
control_interfaces__action__FollowPath_FeedbackMessage__copy(
  const control_interfaces__action__FollowPath_FeedbackMessage * input,
  control_interfaces__action__FollowPath_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!control_interfaces__action__FollowPath_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

control_interfaces__action__FollowPath_FeedbackMessage *
control_interfaces__action__FollowPath_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_FeedbackMessage * msg = (control_interfaces__action__FollowPath_FeedbackMessage *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_interfaces__action__FollowPath_FeedbackMessage));
  bool success = control_interfaces__action__FollowPath_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_interfaces__action__FollowPath_FeedbackMessage__destroy(control_interfaces__action__FollowPath_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_interfaces__action__FollowPath_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_interfaces__action__FollowPath_FeedbackMessage__Sequence__init(control_interfaces__action__FollowPath_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_FeedbackMessage * data = NULL;

  if (size) {
    data = (control_interfaces__action__FollowPath_FeedbackMessage *)allocator.zero_allocate(size, sizeof(control_interfaces__action__FollowPath_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_interfaces__action__FollowPath_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_interfaces__action__FollowPath_FeedbackMessage__fini(&data[i - 1]);
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
control_interfaces__action__FollowPath_FeedbackMessage__Sequence__fini(control_interfaces__action__FollowPath_FeedbackMessage__Sequence * array)
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
      control_interfaces__action__FollowPath_FeedbackMessage__fini(&array->data[i]);
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

control_interfaces__action__FollowPath_FeedbackMessage__Sequence *
control_interfaces__action__FollowPath_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_interfaces__action__FollowPath_FeedbackMessage__Sequence * array = (control_interfaces__action__FollowPath_FeedbackMessage__Sequence *)allocator.allocate(sizeof(control_interfaces__action__FollowPath_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_interfaces__action__FollowPath_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_interfaces__action__FollowPath_FeedbackMessage__Sequence__destroy(control_interfaces__action__FollowPath_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_interfaces__action__FollowPath_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_interfaces__action__FollowPath_FeedbackMessage__Sequence__are_equal(const control_interfaces__action__FollowPath_FeedbackMessage__Sequence * lhs, const control_interfaces__action__FollowPath_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_interfaces__action__FollowPath_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_interfaces__action__FollowPath_FeedbackMessage__Sequence__copy(
  const control_interfaces__action__FollowPath_FeedbackMessage__Sequence * input,
  control_interfaces__action__FollowPath_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_interfaces__action__FollowPath_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_interfaces__action__FollowPath_FeedbackMessage * data =
      (control_interfaces__action__FollowPath_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_interfaces__action__FollowPath_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_interfaces__action__FollowPath_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_interfaces__action__FollowPath_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
