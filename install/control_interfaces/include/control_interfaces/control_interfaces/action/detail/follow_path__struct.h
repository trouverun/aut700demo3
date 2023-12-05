// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_interfaces:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__STRUCT_H_
#define CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

/// Struct defined in action/FollowPath in the package control_interfaces.
typedef struct control_interfaces__action__FollowPath_Goal
{
  geometry_msgs__msg__PoseArray waypoints;
} control_interfaces__action__FollowPath_Goal;

// Struct for a sequence of control_interfaces__action__FollowPath_Goal.
typedef struct control_interfaces__action__FollowPath_Goal__Sequence
{
  control_interfaces__action__FollowPath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__FollowPath_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'success'
#include "std_msgs/msg/detail/bool__struct.h"

/// Struct defined in action/FollowPath in the package control_interfaces.
typedef struct control_interfaces__action__FollowPath_Result
{
  std_msgs__msg__Bool success;
} control_interfaces__action__FollowPath_Result;

// Struct for a sequence of control_interfaces__action__FollowPath_Result.
typedef struct control_interfaces__action__FollowPath_Result__Sequence
{
  control_interfaces__action__FollowPath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__FollowPath_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/FollowPath in the package control_interfaces.
typedef struct control_interfaces__action__FollowPath_Feedback
{
  float progress;
} control_interfaces__action__FollowPath_Feedback;

// Struct for a sequence of control_interfaces__action__FollowPath_Feedback.
typedef struct control_interfaces__action__FollowPath_Feedback__Sequence
{
  control_interfaces__action__FollowPath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__FollowPath_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_interfaces/action/detail/follow_path__struct.h"

/// Struct defined in action/FollowPath in the package control_interfaces.
typedef struct control_interfaces__action__FollowPath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_interfaces__action__FollowPath_Goal goal;
} control_interfaces__action__FollowPath_SendGoal_Request;

// Struct for a sequence of control_interfaces__action__FollowPath_SendGoal_Request.
typedef struct control_interfaces__action__FollowPath_SendGoal_Request__Sequence
{
  control_interfaces__action__FollowPath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__FollowPath_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FollowPath in the package control_interfaces.
typedef struct control_interfaces__action__FollowPath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_interfaces__action__FollowPath_SendGoal_Response;

// Struct for a sequence of control_interfaces__action__FollowPath_SendGoal_Response.
typedef struct control_interfaces__action__FollowPath_SendGoal_Response__Sequence
{
  control_interfaces__action__FollowPath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__FollowPath_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FollowPath in the package control_interfaces.
typedef struct control_interfaces__action__FollowPath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_interfaces__action__FollowPath_GetResult_Request;

// Struct for a sequence of control_interfaces__action__FollowPath_GetResult_Request.
typedef struct control_interfaces__action__FollowPath_GetResult_Request__Sequence
{
  control_interfaces__action__FollowPath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__FollowPath_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_interfaces/action/detail/follow_path__struct.h"

/// Struct defined in action/FollowPath in the package control_interfaces.
typedef struct control_interfaces__action__FollowPath_GetResult_Response
{
  int8_t status;
  control_interfaces__action__FollowPath_Result result;
} control_interfaces__action__FollowPath_GetResult_Response;

// Struct for a sequence of control_interfaces__action__FollowPath_GetResult_Response.
typedef struct control_interfaces__action__FollowPath_GetResult_Response__Sequence
{
  control_interfaces__action__FollowPath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__FollowPath_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_interfaces/action/detail/follow_path__struct.h"

/// Struct defined in action/FollowPath in the package control_interfaces.
typedef struct control_interfaces__action__FollowPath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_interfaces__action__FollowPath_Feedback feedback;
} control_interfaces__action__FollowPath_FeedbackMessage;

// Struct for a sequence of control_interfaces__action__FollowPath_FeedbackMessage.
typedef struct control_interfaces__action__FollowPath_FeedbackMessage__Sequence
{
  control_interfaces__action__FollowPath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_interfaces__action__FollowPath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__STRUCT_H_
