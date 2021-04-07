cmake_minimum_required (VERSION 3.10)

project (BSBase
	VERSION 0.0.1
	LANGUAGES CXX
	DESCRIPTION "Platform-independent data types and platform feature macros made by blAs1N"
	HOMEPAGE_URL "https://github.com/blAs1N/BSBase"
)

set (CMAKE_CXX_STANDARD 17)
set (RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Binaries)

include (CMake/Platform.cmake)

add_library (BSBase INTERFACE)
target_include_directories (${PROJECT_NAME} INTERFACE "Inc/")

add_compile_definitions (_UNICODE)
add_compile_definitions (PLATFORM=${PLATFORM} ${PLATFORM} COMPILER=${COMPILER} ${COMPILER} ARCH=${ARCH} ${ARCH})
add_compile_definitions (DLL_IMPORT=${DLL_IMPORT} DLL_EXPORT=${DLL_EXPORT})