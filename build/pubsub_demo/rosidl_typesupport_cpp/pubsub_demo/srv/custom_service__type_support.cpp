// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from pubsub_demo:srv/CustomService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pubsub_demo/srv/detail/custom_service__functions.h"
#include "pubsub_demo/srv/detail/custom_service__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pubsub_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CustomService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CustomService_Request_type_support_ids_t;

static const _CustomService_Request_type_support_ids_t _CustomService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CustomService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CustomService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CustomService_Request_type_support_symbol_names_t _CustomService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pubsub_demo, srv, CustomService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pubsub_demo, srv, CustomService_Request)),
  }
};

typedef struct _CustomService_Request_type_support_data_t
{
  void * data[2];
} _CustomService_Request_type_support_data_t;

static _CustomService_Request_type_support_data_t _CustomService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CustomService_Request_message_typesupport_map = {
  2,
  "pubsub_demo",
  &_CustomService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CustomService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CustomService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CustomService_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CustomService_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &pubsub_demo__srv__CustomService_Request__get_type_hash,
  &pubsub_demo__srv__CustomService_Request__get_type_description,
  &pubsub_demo__srv__CustomService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pubsub_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pubsub_demo::srv::CustomService_Request>()
{
  return &::pubsub_demo::srv::rosidl_typesupport_cpp::CustomService_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pubsub_demo, srv, CustomService_Request)() {
  return get_message_type_support_handle<pubsub_demo::srv::CustomService_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__functions.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pubsub_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CustomService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CustomService_Response_type_support_ids_t;

static const _CustomService_Response_type_support_ids_t _CustomService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CustomService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CustomService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CustomService_Response_type_support_symbol_names_t _CustomService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pubsub_demo, srv, CustomService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pubsub_demo, srv, CustomService_Response)),
  }
};

typedef struct _CustomService_Response_type_support_data_t
{
  void * data[2];
} _CustomService_Response_type_support_data_t;

static _CustomService_Response_type_support_data_t _CustomService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CustomService_Response_message_typesupport_map = {
  2,
  "pubsub_demo",
  &_CustomService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CustomService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CustomService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CustomService_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CustomService_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &pubsub_demo__srv__CustomService_Response__get_type_hash,
  &pubsub_demo__srv__CustomService_Response__get_type_description,
  &pubsub_demo__srv__CustomService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pubsub_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pubsub_demo::srv::CustomService_Response>()
{
  return &::pubsub_demo::srv::rosidl_typesupport_cpp::CustomService_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pubsub_demo, srv, CustomService_Response)() {
  return get_message_type_support_handle<pubsub_demo::srv::CustomService_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__functions.h"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pubsub_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CustomService_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CustomService_Event_type_support_ids_t;

static const _CustomService_Event_type_support_ids_t _CustomService_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CustomService_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CustomService_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CustomService_Event_type_support_symbol_names_t _CustomService_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pubsub_demo, srv, CustomService_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pubsub_demo, srv, CustomService_Event)),
  }
};

typedef struct _CustomService_Event_type_support_data_t
{
  void * data[2];
} _CustomService_Event_type_support_data_t;

static _CustomService_Event_type_support_data_t _CustomService_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CustomService_Event_message_typesupport_map = {
  2,
  "pubsub_demo",
  &_CustomService_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CustomService_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CustomService_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CustomService_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CustomService_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &pubsub_demo__srv__CustomService_Event__get_type_hash,
  &pubsub_demo__srv__CustomService_Event__get_type_description,
  &pubsub_demo__srv__CustomService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pubsub_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pubsub_demo::srv::CustomService_Event>()
{
  return &::pubsub_demo::srv::rosidl_typesupport_cpp::CustomService_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, pubsub_demo, srv, CustomService_Event)() {
  return get_message_type_support_handle<pubsub_demo::srv::CustomService_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "pubsub_demo/srv/detail/custom_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace pubsub_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CustomService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CustomService_type_support_ids_t;

static const _CustomService_type_support_ids_t _CustomService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CustomService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CustomService_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CustomService_type_support_symbol_names_t _CustomService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pubsub_demo, srv, CustomService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pubsub_demo, srv, CustomService)),
  }
};

typedef struct _CustomService_type_support_data_t
{
  void * data[2];
} _CustomService_type_support_data_t;

static _CustomService_type_support_data_t _CustomService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CustomService_service_typesupport_map = {
  2,
  "pubsub_demo",
  &_CustomService_service_typesupport_ids.typesupport_identifier[0],
  &_CustomService_service_typesupport_symbol_names.symbol_name[0],
  &_CustomService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CustomService_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CustomService_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<pubsub_demo::srv::CustomService_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<pubsub_demo::srv::CustomService_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<pubsub_demo::srv::CustomService_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<pubsub_demo::srv::CustomService>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<pubsub_demo::srv::CustomService>,
  &pubsub_demo__srv__CustomService__get_type_hash,
  &pubsub_demo__srv__CustomService__get_type_description,
  &pubsub_demo__srv__CustomService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace pubsub_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<pubsub_demo::srv::CustomService>()
{
  return &::pubsub_demo::srv::rosidl_typesupport_cpp::CustomService_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, pubsub_demo, srv, CustomService)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<pubsub_demo::srv::CustomService>();
}

#ifdef __cplusplus
}
#endif
