// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_interfaces:srv/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__STRUCT_H_
#define CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/SetPosition in the package control_interfaces.
typedef struct control_interfaces__srv__SetPosition_Request
{
  geometry_msgs__msg__Point position;
} control_interfaces__srv__SetPosition_Request;

// Struct for a sequence of control_interfaces__srv__SetPosition_Request.
typedef struct control_interfaces__srv__SetPosition_Request__Sequence
{
  control_interfaces__srv__SetPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__srv__SetPosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in srv/SetPosition in the package control_interfaces.
typedef struct control_interfaces__srv__SetPosition_Response
{
  std_msgs__msg__Bool success;
} control_interfaces__srv__SetPosition_Response;

// Struct for a sequence of control_interfaces__srv__SetPosition_Response.
typedef struct control_interfaces__srv__SetPosition_Response__Sequence
{
  control_interfaces__srv__SetPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__srv__SetPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__STRUCT_H_
