// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_interfaces:srv/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__TRAITS_HPP_
#define CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_interfaces/srv/detail/set_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace control_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::srv::SetPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::srv::SetPosition_Request & msg)
{
  return control_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::srv::SetPosition_Request>()
{
  return "control_interfaces::srv::SetPosition_Request";
}

template<>
inline const char * name<control_interfaces::srv::SetPosition_Request>()
{
  return "control_interfaces/srv/SetPosition_Request";
}

template<>
struct has_fixed_size<control_interfaces::srv::SetPosition_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<control_interfaces::srv::SetPosition_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<control_interfaces::srv::SetPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'success'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace control_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPosition_Response & msg,
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
  const SetPosition_Response & msg,
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

inline std::string to_yaml(const SetPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use control_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_interfaces::srv::SetPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_interfaces::srv::SetPosition_Response & msg)
{
  return control_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_interfaces::srv::SetPosition_Response>()
{
  return "control_interfaces::srv::SetPosition_Response";
}

template<>
inline const char * name<control_interfaces::srv::SetPosition_Response>()
{
  return "control_interfaces/srv/SetPosition_Response";
}

template<>
struct has_fixed_size<control_interfaces::srv::SetPosition_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<control_interfaces::srv::SetPosition_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<control_interfaces::srv::SetPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_interfaces::srv::SetPosition>()
{
  return "control_interfaces::srv::SetPosition";
}

template<>
inline const char * name<control_interfaces::srv::SetPosition>()
{
  return "control_interfaces/srv/SetPosition";
}

template<>
struct has_fixed_size<control_interfaces::srv::SetPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<control_interfaces::srv::SetPosition_Request>::value &&
    has_fixed_size<control_interfaces::srv::SetPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_interfaces::srv::SetPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<control_interfaces::srv::SetPosition_Request>::value &&
    has_bounded_size<control_interfaces::srv::SetPosition_Response>::value
  >
{
};

template<>
struct is_service<control_interfaces::srv::SetPosition>
  : std::true_type
{
};

template<>
struct is_service_request<control_interfaces::srv::SetPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_interfaces::srv::SetPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__TRAITS_HPP_
