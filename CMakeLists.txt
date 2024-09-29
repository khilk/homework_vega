cmake_minimum_required(VERSION 3.28)

project(algorithms)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src) # add libsort library
add_subdirectory(app) # add sort_app executable
