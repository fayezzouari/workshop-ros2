// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pubsub_demo:srv/CustomService.idl
// generated code does not contain a copyright notice

#include "pubsub_demo/srv/detail/custom_service__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__srv__CustomService__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0x17, 0xca, 0x16, 0x77, 0x5a, 0x01, 0x4f,
      0x61, 0x4c, 0x6f, 0x00, 0x29, 0x1e, 0xf5, 0x54,
      0xd6, 0x6a, 0x74, 0x15, 0x2e, 0x4d, 0x9b, 0x93,
      0x6a, 0x59, 0xc3, 0xc3, 0xb4, 0x85, 0xda, 0x4d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__srv__CustomService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x8b, 0x27, 0x94, 0x11, 0xab, 0x5d, 0x34,
      0xb9, 0xd4, 0x5b, 0x07, 0x5d, 0x20, 0xf8, 0xd4,
      0x6f, 0xf1, 0x3a, 0xe2, 0xb4, 0x86, 0x65, 0x75,
      0xea, 0x85, 0xf4, 0x5f, 0xea, 0xd8, 0x34, 0x30,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__srv__CustomService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0x73, 0x3b, 0x8e, 0xd4, 0xee, 0x73, 0xf3,
      0xa0, 0x60, 0x84, 0x38, 0xa4, 0x6e, 0xc5, 0xb9,
      0xc8, 0x79, 0xdf, 0x9a, 0xfe, 0xa6, 0x81, 0x24,
      0xc5, 0x7f, 0xb0, 0x8d, 0x11, 0x51, 0x25, 0x32,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__srv__CustomService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x3f, 0x48, 0xa9, 0x68, 0xf6, 0x37, 0xc0,
      0x12, 0x7f, 0xdb, 0xea, 0x93, 0xa6, 0x75, 0xfc,
      0x2d, 0x85, 0x43, 0x59, 0xbc, 0x7f, 0x97, 0x2f,
      0x39, 0xec, 0x9b, 0x5e, 0x36, 0x04, 0x06, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "pubsub_demo/msg/detail/custom_message__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t pubsub_demo__msg__CustomMessage__EXPECTED_HASH = {1, {
    0x7b, 0x3f, 0x8b, 0xc5, 0x6a, 0x60, 0x15, 0x01,
    0x3f, 0xd8, 0x88, 0x65, 0x17, 0x13, 0x54, 0x9c,
    0x24, 0xd9, 0xbc, 0xfd, 0x2c, 0xb4, 0x7c, 0x1a,
    0x72, 0x57, 0xb0, 0x8d, 0xe1, 0x65, 0xaf, 0xc8,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char pubsub_demo__srv__CustomService__TYPE_NAME[] = "pubsub_demo/srv/CustomService";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char pubsub_demo__msg__CustomMessage__TYPE_NAME[] = "pubsub_demo/msg/CustomMessage";
static char pubsub_demo__srv__CustomService_Event__TYPE_NAME[] = "pubsub_demo/srv/CustomService_Event";
static char pubsub_demo__srv__CustomService_Request__TYPE_NAME[] = "pubsub_demo/srv/CustomService_Request";
static char pubsub_demo__srv__CustomService_Response__TYPE_NAME[] = "pubsub_demo/srv/CustomService_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char pubsub_demo__srv__CustomService__FIELD_NAME__request_message[] = "request_message";
static char pubsub_demo__srv__CustomService__FIELD_NAME__response_message[] = "response_message";
static char pubsub_demo__srv__CustomService__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field pubsub_demo__srv__CustomService__FIELDS[] = {
  {
    {pubsub_demo__srv__CustomService__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pubsub_demo__srv__CustomService_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pubsub_demo__srv__CustomService_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pubsub_demo__srv__CustomService_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pubsub_demo__srv__CustomService__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__msg__CustomMessage__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__srv__CustomService__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pubsub_demo__srv__CustomService__TYPE_NAME, 29, 29},
      {pubsub_demo__srv__CustomService__FIELDS, 3, 3},
    },
    {pubsub_demo__srv__CustomService__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pubsub_demo__msg__CustomMessage__EXPECTED_HASH, pubsub_demo__msg__CustomMessage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = pubsub_demo__msg__CustomMessage__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = pubsub_demo__srv__CustomService_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = pubsub_demo__srv__CustomService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = pubsub_demo__srv__CustomService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pubsub_demo__srv__CustomService_Request__FIELD_NAME__request[] = "request";

static rosidl_runtime_c__type_description__Field pubsub_demo__srv__CustomService_Request__FIELDS[] = {
  {
    {pubsub_demo__srv__CustomService_Request__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pubsub_demo__msg__CustomMessage__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pubsub_demo__srv__CustomService_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {pubsub_demo__msg__CustomMessage__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__srv__CustomService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pubsub_demo__srv__CustomService_Request__TYPE_NAME, 37, 37},
      {pubsub_demo__srv__CustomService_Request__FIELDS, 1, 1},
    },
    {pubsub_demo__srv__CustomService_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&pubsub_demo__msg__CustomMessage__EXPECTED_HASH, pubsub_demo__msg__CustomMessage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = pubsub_demo__msg__CustomMessage__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pubsub_demo__srv__CustomService_Response__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field pubsub_demo__srv__CustomService_Response__FIELDS[] = {
  {
    {pubsub_demo__srv__CustomService_Response__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__srv__CustomService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pubsub_demo__srv__CustomService_Response__TYPE_NAME, 38, 38},
      {pubsub_demo__srv__CustomService_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pubsub_demo__srv__CustomService_Event__FIELD_NAME__info[] = "info";
static char pubsub_demo__srv__CustomService_Event__FIELD_NAME__request[] = "request";
static char pubsub_demo__srv__CustomService_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field pubsub_demo__srv__CustomService_Event__FIELDS[] = {
  {
    {pubsub_demo__srv__CustomService_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {pubsub_demo__srv__CustomService_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {pubsub_demo__srv__CustomService_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pubsub_demo__srv__CustomService_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__msg__CustomMessage__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__srv__CustomService_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__srv__CustomService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pubsub_demo__srv__CustomService_Event__TYPE_NAME, 35, 35},
      {pubsub_demo__srv__CustomService_Event__FIELDS, 3, 3},
    },
    {pubsub_demo__srv__CustomService_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pubsub_demo__msg__CustomMessage__EXPECTED_HASH, pubsub_demo__msg__CustomMessage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = pubsub_demo__msg__CustomMessage__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = pubsub_demo__srv__CustomService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = pubsub_demo__srv__CustomService_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "CustomMessage request\n"
  "---\n"
  "string response";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__srv__CustomService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pubsub_demo__srv__CustomService__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__srv__CustomService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pubsub_demo__srv__CustomService_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__srv__CustomService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pubsub_demo__srv__CustomService_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__srv__CustomService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pubsub_demo__srv__CustomService_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__srv__CustomService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pubsub_demo__srv__CustomService__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *pubsub_demo__msg__CustomMessage__get_individual_type_description_source(NULL);
    sources[3] = *pubsub_demo__srv__CustomService_Event__get_individual_type_description_source(NULL);
    sources[4] = *pubsub_demo__srv__CustomService_Request__get_individual_type_description_source(NULL);
    sources[5] = *pubsub_demo__srv__CustomService_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__srv__CustomService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pubsub_demo__srv__CustomService_Request__get_individual_type_description_source(NULL),
    sources[1] = *pubsub_demo__msg__CustomMessage__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__srv__CustomService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pubsub_demo__srv__CustomService_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__srv__CustomService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pubsub_demo__srv__CustomService_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *pubsub_demo__msg__CustomMessage__get_individual_type_description_source(NULL);
    sources[3] = *pubsub_demo__srv__CustomService_Request__get_individual_type_description_source(NULL);
    sources[4] = *pubsub_demo__srv__CustomService_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
