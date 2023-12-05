// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_interfaces:srv/SetGoal.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INTERFACES__SRV__DETAIL__SET_GOAL__STRUCT_HPP_
#define CONTROL_INTERFACES__SRV__DETAIL__SET_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_interfaces__srv__SetGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__control_interfaces__srv__SetGoal_Request __declspec(deprecated)
#endif

namespace control_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGoal_Request_
{
  using Type = SetGoal_Request_<ContainerAllocator>;

  explicit SetGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    (void)_init;
  }

  explicit SetGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_interfaces::srv::SetGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_interfaces::srv::SetGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_interfaces::srv::SetGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_interfaces::srv::SetGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::SetGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::SetGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::SetGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::SetGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_interfaces::srv::SetGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_interfaces::srv::SetGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_interfaces__srv__SetGoal_Request
    std::shared_ptr<control_interfaces::srv::SetGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_interfaces__srv__SetGoal_Request
    std::shared_ptr<control_interfaces::srv::SetGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGoal_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGoal_Request_

// alias to use template instance with default allocator
using SetGoal_Request =
  control_interfaces::srv::SetGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace control_interfaces


// Include directives for member types
// Member 'success'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_interfaces__srv__SetGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__control_interfaces__srv__SetGoal_Response __declspec(deprecated)
#endif

namespace control_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGoal_Response_
{
  using Type = SetGoal_Response_<ContainerAllocator>;

  explicit SetGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : success(_init)
  {
    (void)_init;
  }

  explicit SetGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : success(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _success_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_interfaces::srv::SetGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_interfaces::srv::SetGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_interfaces::srv::SetGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_interfaces::srv::SetGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::SetGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::SetGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_interfaces::srv::SetGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_interfaces::srv::SetGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_interfaces::srv::SetGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_interfaces::srv::SetGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_interfaces__srv__SetGoal_Response
    std::shared_ptr<control_interfaces::srv::SetGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_interfaces__srv__SetGoal_Response
    std::shared_ptr<control_interfaces::srv::SetGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGoal_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGoal_Response_

// alias to use template instance with default allocator
using SetGoal_Response =
  control_interfaces::srv::SetGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace control_interfaces

namespace control_interfaces
{

namespace srv
{

struct SetGoal
{
  using Request = control_interfaces::srv::SetGoal_Request;
  using Response = control_interfaces::srv::SetGoal_Response;
};

}  // namespace srv

}  // namespace control_interfaces

#endif  // CONTROL_INTERFACES__SRV__DETAIL__SET_GOAL__STRUCT_HPP_
