// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_interfaces:srv/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_
#define CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_interfaces/srv/detail/set_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosition_Request_position
{
public:
  Init_SetPosition_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::srv::SetPosition_Request position(::control_interfaces::srv::SetPosition_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::SetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::SetPosition_Request>()
{
  return control_interfaces::srv::builder::Init_SetPosition_Request_position();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPosition_Response_success
{
public:
  Init_SetPosition_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::srv::SetPosition_Response success(::control_interfaces::srv::SetPosition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::srv::SetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::srv::SetPosition_Response>()
{
  return control_interfaces::srv::builder::Init_SetPosition_Response_success();
}

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__SRV__DETAIL__SET_POSITION__BUILDER_HPP_
