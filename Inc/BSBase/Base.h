#pragma once

#define NO_ODR inline

#ifdef NULL
#	undef NULL
#endif

#ifdef __cplusplus
#	define NULL (0)
#else
#	define NULL ((void*)0)
#endif

#define ADD_PREFIX_IMPL(prefix, x) prefix##x
#define ADD_PREFIX(prefix, x) ADD_PREFIX_IMPL(prefix, x)

#define STRINGIFY_PREFIX_IMPL(prefix, x) prefix#x
#define STRINGIFY_PREFIX(prefix, x) STRINGIFY_PREFIX_IMPL(prefix, x)

#define STRINGIFY_IMPL(x) #x
#define STRINGIFY(x) STRINGIFY_IMPL(x)

#define STRING_JOIN(lhs, rhs)  STRING_JOIN1(lhs, rhs)
#define STRING_JOIN1(lhs, rhs) STRING_JOIN2(lhs, rhs)
#define STRING_JOIN2(lhs, rhs) lhs##rhs
