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

#define STRINGIFYIMPL(x) #x
#define STRINGIFY(x) STRINGIFYIMPL(x)

#define STRING_JOIN(lhs, rhs)  STRING_JOIN1(lhs, rhs)
#define STRING_JOIN1(lhs, rhs) STRING_JOIN2(lhs, rhs)
#define STRING_JOIN2(lhs, rhs) lhs##rhs

#ifdef MSVC
#	define DLL_IMPORT __declspec(dllimport)
#else
#	define DLL_IMPORT __attribute__((visibility("default")))
#endif

#ifdef MSVC
#	define DLL_EXPORT __declspec(dllexport)
#else
#	define DLL_EXPORT __attribute__((visibility("default")))
#endif
