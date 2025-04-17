// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pubsub_demo:srv/CustomService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pubsub_demo/srv/custom_service.h"


#ifndef PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__FUNCTIONS_H_
#define PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "pubsub_demo/msg/rosidl_generator_c__visibility_control.h"

#include "pubsub_demo/srv/detail/custom_service__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__srv__CustomService__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__srv__CustomService__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__srv__CustomService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__srv__CustomService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/CustomService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pubsub_demo__srv__CustomService_Request
 * )) before or use
 * pubsub_demo__srv__CustomService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Request__init(pubsub_demo__srv__CustomService_Request * msg);

/// Finalize srv/CustomService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Request__fini(pubsub_demo__srv__CustomService_Request * msg);

/// Create srv/CustomService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pubsub_demo__srv__CustomService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
pubsub_demo__srv__CustomService_Request *
pubsub_demo__srv__CustomService_Request__create(void);

/// Destroy srv/CustomService message.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Request__destroy(pubsub_demo__srv__CustomService_Request * msg);

/// Check for srv/CustomService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Request__are_equal(const pubsub_demo__srv__CustomService_Request * lhs, const pubsub_demo__srv__CustomService_Request * rhs);

/// Copy a srv/CustomService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Request__copy(
  const pubsub_demo__srv__CustomService_Request * input,
  pubsub_demo__srv__CustomService_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__srv__CustomService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__srv__CustomService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__srv__CustomService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__srv__CustomService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/CustomService messages.
/**
 * It allocates the memory for the number of elements and calls
 * pubsub_demo__srv__CustomService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Request__Sequence__init(pubsub_demo__srv__CustomService_Request__Sequence * array, size_t size);

/// Finalize array of srv/CustomService messages.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Request__Sequence__fini(pubsub_demo__srv__CustomService_Request__Sequence * array);

/// Create array of srv/CustomService messages.
/**
 * It allocates the memory for the array and calls
 * pubsub_demo__srv__CustomService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
pubsub_demo__srv__CustomService_Request__Sequence *
pubsub_demo__srv__CustomService_Request__Sequence__create(size_t size);

/// Destroy array of srv/CustomService messages.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Request__Sequence__destroy(pubsub_demo__srv__CustomService_Request__Sequence * array);

/// Check for srv/CustomService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Request__Sequence__are_equal(const pubsub_demo__srv__CustomService_Request__Sequence * lhs, const pubsub_demo__srv__CustomService_Request__Sequence * rhs);

/// Copy an array of srv/CustomService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Request__Sequence__copy(
  const pubsub_demo__srv__CustomService_Request__Sequence * input,
  pubsub_demo__srv__CustomService_Request__Sequence * output);

/// Initialize srv/CustomService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pubsub_demo__srv__CustomService_Response
 * )) before or use
 * pubsub_demo__srv__CustomService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Response__init(pubsub_demo__srv__CustomService_Response * msg);

/// Finalize srv/CustomService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Response__fini(pubsub_demo__srv__CustomService_Response * msg);

/// Create srv/CustomService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pubsub_demo__srv__CustomService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
pubsub_demo__srv__CustomService_Response *
pubsub_demo__srv__CustomService_Response__create(void);

/// Destroy srv/CustomService message.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Response__destroy(pubsub_demo__srv__CustomService_Response * msg);

/// Check for srv/CustomService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Response__are_equal(const pubsub_demo__srv__CustomService_Response * lhs, const pubsub_demo__srv__CustomService_Response * rhs);

/// Copy a srv/CustomService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Response__copy(
  const pubsub_demo__srv__CustomService_Response * input,
  pubsub_demo__srv__CustomService_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__srv__CustomService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__srv__CustomService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__srv__CustomService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__srv__CustomService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/CustomService messages.
/**
 * It allocates the memory for the number of elements and calls
 * pubsub_demo__srv__CustomService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Response__Sequence__init(pubsub_demo__srv__CustomService_Response__Sequence * array, size_t size);

/// Finalize array of srv/CustomService messages.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Response__Sequence__fini(pubsub_demo__srv__CustomService_Response__Sequence * array);

/// Create array of srv/CustomService messages.
/**
 * It allocates the memory for the array and calls
 * pubsub_demo__srv__CustomService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
pubsub_demo__srv__CustomService_Response__Sequence *
pubsub_demo__srv__CustomService_Response__Sequence__create(size_t size);

/// Destroy array of srv/CustomService messages.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Response__Sequence__destroy(pubsub_demo__srv__CustomService_Response__Sequence * array);

/// Check for srv/CustomService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Response__Sequence__are_equal(const pubsub_demo__srv__CustomService_Response__Sequence * lhs, const pubsub_demo__srv__CustomService_Response__Sequence * rhs);

/// Copy an array of srv/CustomService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Response__Sequence__copy(
  const pubsub_demo__srv__CustomService_Response__Sequence * input,
  pubsub_demo__srv__CustomService_Response__Sequence * output);

/// Initialize srv/CustomService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pubsub_demo__srv__CustomService_Event
 * )) before or use
 * pubsub_demo__srv__CustomService_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Event__init(pubsub_demo__srv__CustomService_Event * msg);

/// Finalize srv/CustomService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Event__fini(pubsub_demo__srv__CustomService_Event * msg);

/// Create srv/CustomService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pubsub_demo__srv__CustomService_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
pubsub_demo__srv__CustomService_Event *
pubsub_demo__srv__CustomService_Event__create(void);

/// Destroy srv/CustomService message.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Event__destroy(pubsub_demo__srv__CustomService_Event * msg);

/// Check for srv/CustomService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Event__are_equal(const pubsub_demo__srv__CustomService_Event * lhs, const pubsub_demo__srv__CustomService_Event * rhs);

/// Copy a srv/CustomService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Event__copy(
  const pubsub_demo__srv__CustomService_Event * input,
  pubsub_demo__srv__CustomService_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_type_hash_t *
pubsub_demo__srv__CustomService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeDescription *
pubsub_demo__srv__CustomService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource *
pubsub_demo__srv__CustomService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
const rosidl_runtime_c__type_description__TypeSource__Sequence *
pubsub_demo__srv__CustomService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/CustomService messages.
/**
 * It allocates the memory for the number of elements and calls
 * pubsub_demo__srv__CustomService_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Event__Sequence__init(pubsub_demo__srv__CustomService_Event__Sequence * array, size_t size);

/// Finalize array of srv/CustomService messages.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Event__Sequence__fini(pubsub_demo__srv__CustomService_Event__Sequence * array);

/// Create array of srv/CustomService messages.
/**
 * It allocates the memory for the array and calls
 * pubsub_demo__srv__CustomService_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
pubsub_demo__srv__CustomService_Event__Sequence *
pubsub_demo__srv__CustomService_Event__Sequence__create(size_t size);

/// Destroy array of srv/CustomService messages.
/**
 * It calls
 * pubsub_demo__srv__CustomService_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
void
pubsub_demo__srv__CustomService_Event__Sequence__destroy(pubsub_demo__srv__CustomService_Event__Sequence * array);

/// Check for srv/CustomService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Event__Sequence__are_equal(const pubsub_demo__srv__CustomService_Event__Sequence * lhs, const pubsub_demo__srv__CustomService_Event__Sequence * rhs);

/// Copy an array of srv/CustomService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pubsub_demo
bool
pubsub_demo__srv__CustomService_Event__Sequence__copy(
  const pubsub_demo__srv__CustomService_Event__Sequence * input,
  pubsub_demo__srv__CustomService_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // PUBSUB_DEMO__SRV__DETAIL__CUSTOM_SERVICE__FUNCTIONS_H_
