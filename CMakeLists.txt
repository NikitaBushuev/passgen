cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(password-generator VERSION 0.1.0 LANGUAGES CXX)

set(PASSGEN_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(PASSGEN_SOURCES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

include_directories("${PASSGEN_INCLUDE_DIRS}")

file(GLOB_RECURSE PASSGEN_SOURCES "${PASSGEN_SOURCES_DIR}/*.cpp")

add_executable(passgen ${PASSGEN_SOURCES})

target_link_libraries(passgen stdc++)