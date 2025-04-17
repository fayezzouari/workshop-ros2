// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pubsub_demo:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#include "pubsub_demo/msg/detail/custom_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__msg__CustomMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x3f, 0x8b, 0xc5, 0x6a, 0x60, 0x15, 0x01,
      0x3f, 0xd8, 0x88, 0x65, 0x17, 0x13, 0x54, 0x9c,
      0x24, 0xd9, 0xbc, 0xfd, 0x2c, 0xb4, 0x7c, 0x1a,
      0x72, 0x57, 0xb0, 0x8d, 0xe1, 0x65, 0xaf, 0xc8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pubsub_demo__msg__CustomMessage__TYPE_NAME[] = "pubsub_demo/msg/CustomMessage";

// Define type names, field names, and default values
static char pubsub_demo__msg__CustomMessage__FIELD_NAME__name[] = "name";
static char pubsub_demo__msg__CustomMessage__FIELD_NAME__count[] = "count";

static rosidl_runtime_c__type_description__Field pubsub_demo__msg__CustomMessage__FIELDS[] = {
  {
    {pubsub_demo__msg__CustomMessage__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pubsub_demo__msg__CustomMessage__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__msg__CustomMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pubsub_demo__msg__CustomMessage__TYPE_NAME, 29, 29},
      {pubsub_demo__msg__CustomMessage__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "int32 count";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__msg__CustomMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pubsub_demo__msg__CustomMessage__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__msg__CustomMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pubsub_demo__msg__CustomMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
