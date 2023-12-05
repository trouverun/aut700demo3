// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_interfaces:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_
#define CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_interfaces/action/detail/follow_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"

namespace control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    out << "waypoints: ";
    to_flow_style_yaml(msg.waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints:\n";
    to_block_style_yaml(msg.waypoints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::action::FollowPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::action::FollowPath_Goal & msg)
{
  return control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::action::FollowPath_Goal>()
{
  return "control_interfaces::action::FollowPath_Goal";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_Goal>()
{
  return "control_interfaces/action/FollowPath_Goal";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseArray>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseArray>::value> {};

template<>
struct is_message<control_interfaces::action::FollowPath_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'success'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    to_flow_style_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success:\n";
    to_block_style_yaml(msg.success, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::action::FollowPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::action::FollowPath_Result & msg)
{
  return control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::action::FollowPath_Result>()
{
  return "control_interfaces::action::FollowPath_Result";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_Result>()
{
  return "control_interfaces/action/FollowPath_Result";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_Result>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_Result>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<control_interfaces::action::FollowPath_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::action::FollowPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::action::FollowPath_Feedback & msg)
{
  return control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::action::FollowPath_Feedback>()
{
  return "control_interfaces::action::FollowPath_Feedback";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_Feedback>()
{
  return "control_interfaces/action/FollowPath_Feedback";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_interfaces::action::FollowPath_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "control_interfaces/action/detail/follow_path__traits.hpp"

namespace control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::action::FollowPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::action::FollowPath_SendGoal_Request & msg)
{
  return control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::action::FollowPath_SendGoal_Request>()
{
  return "control_interfaces::action::FollowPath_SendGoal_Request";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_SendGoal_Request>()
{
  return "control_interfaces/action/FollowPath_SendGoal_Request";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<control_interfaces::action::FollowPath_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<control_interfaces::action::FollowPath_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_interfaces::action::FollowPath_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::action::FollowPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::action::FollowPath_SendGoal_Response & msg)
{
  return control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::action::FollowPath_SendGoal_Response>()
{
  return "control_interfaces::action::FollowPath_SendGoal_Response";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_SendGoal_Response>()
{
  return "control_interfaces/action/FollowPath_SendGoal_Response";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_interfaces::action::FollowPath_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::FollowPath_SendGoal>()
{
  return "control_interfaces::action::FollowPath_SendGoal";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_SendGoal>()
{
  return "control_interfaces/action/FollowPath_SendGoal";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<control_interfaces::action::FollowPath_SendGoal_Request>::value &&
    has_fixed_size<control_interfaces::action::FollowPath_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<control_interfaces::action::FollowPath_SendGoal_Request>::value &&
    has_bounded_size<control_interfaces::action::FollowPath_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<control_interfaces::action::FollowPath_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<control_interfaces::action::FollowPath_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_interfaces::action::FollowPath_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::action::FollowPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::action::FollowPath_GetResult_Request & msg)
{
  return control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::action::FollowPath_GetResult_Request>()
{
  return "control_interfaces::action::FollowPath_GetResult_Request";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_GetResult_Request>()
{
  return "control_interfaces/action/FollowPath_GetResult_Request";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_interfaces::action::FollowPath_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "control_interfaces/action/detail/follow_path__traits.hpp"

namespace control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::action::FollowPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::action::FollowPath_GetResult_Response & msg)
{
  return control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::action::FollowPath_GetResult_Response>()
{
  return "control_interfaces::action::FollowPath_GetResult_Response";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_GetResult_Response>()
{
  return "control_interfaces/action/FollowPath_GetResult_Response";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<control_interfaces::action::FollowPath_Result>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<control_interfaces::action::FollowPath_Result>::value> {};

template<>
struct is_message<control_interfaces::action::FollowPath_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::action::FollowPath_GetResult>()
{
  return "control_interfaces::action::FollowPath_GetResult";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_GetResult>()
{
  return "control_interfaces/action/FollowPath_GetResult";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<control_interfaces::action::FollowPath_GetResult_Request>::value &&
    has_fixed_size<control_interfaces::action::FollowPath_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<control_interfaces::action::FollowPath_GetResult_Request>::value &&
    has_bounded_size<control_interfaces::action::FollowPath_GetResult_Response>::value
  >
{
};

template<>
struct is_service<control_interfaces::action::FollowPath_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<control_interfaces::action::FollowPath_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_interfaces::action::FollowPath_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "control_interfaces/action/detail/follow_path__traits.hpp"

namespace control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const FollowPath_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowPath_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::action::FollowPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::action::FollowPath_FeedbackMessage & msg)
{
  return control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::action::FollowPath_FeedbackMessage>()
{
  return "control_interfaces::action::FollowPath_FeedbackMessage";
}

template<>
inline const char * name<control_interfaces::action::FollowPath_FeedbackMessage>()
{
  return "control_interfaces/action/FollowPath_FeedbackMessage";
}

template<>
struct has_fixed_size<control_interfaces::action::FollowPath_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<control_interfaces::action::FollowPath_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_interfaces::action::FollowPath_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<control_interfaces::action::FollowPath_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_interfaces::action::FollowPath_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<control_interfaces::action::FollowPath>
  : std::true_type
{
};

template<>
struct is_action_goal<control_interfaces::action::FollowPath_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<control_interfaces::action::FollowPath_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<control_interfaces::action::FollowPath_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_
