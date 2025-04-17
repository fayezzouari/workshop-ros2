// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pubsub_demo:srv/CustomService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/srv/custom_service.hpp"


#ifndef PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_
#define PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pubsub_demo/srv/detail/custom_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pubsub_demo
{

namespace srv
{

namespace builder
{

class Init_CustomService_Request_request
{
public:
  Init_CustomService_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pubsub_demo::srv::CustomService_Request request(::pubsub_demo::srv::CustomService_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pubsub_demo::srv::CustomService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pubsub_demo::srv::CustomService_Request>()
{
  return pubsub_demo::srv::builder::Init_CustomService_Request_request();
}

}  // namespace pubsub_demo


namespace pubsub_demo
{

namespace srv
{

namespace builder
{

class Init_CustomService_Response_response
{
public:
  Init_CustomService_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pubsub_demo::srv::CustomService_Response response(::pubsub_demo::srv::CustomService_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pubsub_demo::srv::CustomService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pubsub_demo::srv::CustomService_Response>()
{
  return pubsub_demo::srv::builder::Init_CustomService_Response_response();
}

}  // namespace pubsub_demo


namespace pubsub_demo
{

namespace srv
{

namespace builder
{

class Init_CustomService_Event_response
{
public:
  explicit Init_CustomService_Event_response(::pubsub_demo::srv::CustomService_Event & msg)
  : msg_(msg)
  {}
  ::pubsub_demo::srv::CustomService_Event response(::pubsub_demo::srv::CustomService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pubsub_demo::srv::CustomService_Event msg_;
};

class Init_CustomService_Event_request
{
public:
  explicit Init_CustomService_Event_request(::pubsub_demo::srv::CustomService_Event & msg)
  : msg_(msg)
  {}
  Init_CustomService_Event_response request(::pubsub_demo::srv::CustomService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CustomService_Event_response(msg_);
  }

private:
  ::pubsub_demo::srv::CustomService_Event msg_;
};

class Init_CustomService_Event_info
{
public:
  Init_CustomService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomService_Event_request info(::pubsub_demo::srv::CustomService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CustomService_Event_request(msg_);
  }

private:
  ::pubsub_demo::srv::CustomService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pubsub_demo::srv::CustomService_Event>()
{
  return pubsub_demo::srv::builder::Init_CustomService_Event_info();
}

}  // namespace pubsub_demo

#endif  // PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_
