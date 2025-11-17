cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(PROJ_NAME "cross_os_assert")
project (${PROJ_NAME})

set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_DEBUG_POSTFIX _debug)
set(CMAKE_RELEASE_POSTFIX _release)

add_definitions(-D__SYCL_DEVICE_ONLY__)

add_executable(${PROJ_NAME} "${PROJECT_ROOT_DIR}/main.cpp")

set_target_properties(
  ${PROJ_NAME}
  PROPERTIES
  DEBUG_POSTFIX "${CMAKE_DEBUG_POSTFIX}"
)

set_target_properties(
  ${PROJ_NAME}
  PROPERTIES
  RELEASE_POSTFIX "${CMAKE_RELEASE_POSTFIX}"
)