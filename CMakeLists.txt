cmake_minimum_required (VERSION 3.12)

project (BSBase
	VERSION 0.1.0
	LANGUAGES CXX
	DESCRIPTION "Platform-independent data types and platform feature macros made by blAs1N"
	HOMEPAGE_URL "https://github.com/blAs1N/BSBase"
)

include (GNUInstallDirs)
include (CMake/Platform.cmake)

set (CMAKE_CXX_STANDARD 17)
set (RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Binaries)

add_library (${PROJECT_NAME} INTERFACE)
add_library (${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories (${PROJECT_NAME}
  INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Inc>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

include (CMake/InstallProject.cmake)