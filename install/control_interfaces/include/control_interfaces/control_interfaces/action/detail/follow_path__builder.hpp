// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_interfaces:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__BUILDER_HPP_
#define CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_interfaces/action/detail/follow_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowPath_Goal_waypoints
{
public:
  Init_FollowPath_Goal_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::action::FollowPath_Goal waypoints(::control_interfaces::action::FollowPath_Goal::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::FollowPath_Goal>()
{
  return control_interfaces::action::builder::Init_FollowPath_Goal_waypoints();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowPath_Result_success
{
public:
  Init_FollowPath_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::action::FollowPath_Result success(::control_interfaces::action::FollowPath_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::FollowPath_Result>()
{
  return control_interfaces::action::builder::Init_FollowPath_Result_success();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowPath_Feedback_progress
{
public:
  Init_FollowPath_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::action::FollowPath_Feedback progress(::control_interfaces::action::FollowPath_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::FollowPath_Feedback>()
{
  return control_interfaces::action::builder::Init_FollowPath_Feedback_progress();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowPath_SendGoal_Request_goal
{
public:
  explicit Init_FollowPath_SendGoal_Request_goal(::control_interfaces::action::FollowPath_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::FollowPath_SendGoal_Request goal(::control_interfaces::action::FollowPath_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_SendGoal_Request msg_;
};

class Init_FollowPath_SendGoal_Request_goal_id
{
public:
  Init_FollowPath_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_SendGoal_Request_goal goal_id(::control_interfaces::action::FollowPath_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowPath_SendGoal_Request_goal(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::FollowPath_SendGoal_Request>()
{
  return control_interfaces::action::builder::Init_FollowPath_SendGoal_Request_goal_id();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowPath_SendGoal_Response_stamp
{
public:
  explicit Init_FollowPath_SendGoal_Response_stamp(::control_interfaces::action::FollowPath_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::FollowPath_SendGoal_Response stamp(::control_interfaces::action::FollowPath_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_SendGoal_Response msg_;
};

class Init_FollowPath_SendGoal_Response_accepted
{
public:
  Init_FollowPath_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_SendGoal_Response_stamp accepted(::control_interfaces::action::FollowPath_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowPath_SendGoal_Response_stamp(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::FollowPath_SendGoal_Response>()
{
  return control_interfaces::action::builder::Init_FollowPath_SendGoal_Response_accepted();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowPath_GetResult_Request_goal_id
{
public:
  Init_FollowPath_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_interfaces::action::FollowPath_GetResult_Request goal_id(::control_interfaces::action::FollowPath_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::FollowPath_GetResult_Request>()
{
  return control_interfaces::action::builder::Init_FollowPath_GetResult_Request_goal_id();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowPath_GetResult_Response_result
{
public:
  explicit Init_FollowPath_GetResult_Response_result(::control_interfaces::action::FollowPath_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::FollowPath_GetResult_Response result(::control_interfaces::action::FollowPath_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_GetResult_Response msg_;
};

class Init_FollowPath_GetResult_Response_status
{
public:
  Init_FollowPath_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_GetResult_Response_result status(::control_interfaces::action::FollowPath_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowPath_GetResult_Response_result(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::FollowPath_GetResult_Response>()
{
  return control_interfaces::action::builder::Init_FollowPath_GetResult_Response_status();
}

}  // namespace control_interfaces


namespace control_interfaces
{

namespace action
{

namespace builder
{

class Init_FollowPath_FeedbackMessage_feedback
{
public:
  explicit Init_FollowPath_FeedbackMessage_feedback(::control_interfaces::action::FollowPath_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::control_interfaces::action::FollowPath_FeedbackMessage feedback(::control_interfaces::action::FollowPath_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_FeedbackMessage msg_;
};

class Init_FollowPath_FeedbackMessage_goal_id
{
public:
  Init_FollowPath_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowPath_FeedbackMessage_feedback goal_id(::control_interfaces::action::FollowPath_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowPath_FeedbackMessage_feedback(msg_);
  }

private:
  ::control_interfaces::action::FollowPath_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_interfaces::action::FollowPath_FeedbackMessage>()
{
  return control_interfaces::action::builder::Init_FollowPath_FeedbackMessage_goal_id();
}

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__ACTION__DETAIL__FOLLOW_PATH__BUILDER_HPP_
