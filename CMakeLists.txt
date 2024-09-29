cmake_minimum_required(VERSION 3.28)

project(algorithms)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# default build type
option(CMAKE_BUILD_TYPE "Release")

set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# tests and main executable disabled by default
# use: -DALGO_TESTS=ON -DALGO_APP=ON
option(ALGO_TESTS OFF)
option(ALGO_APP OFF)

add_subdirectory(src) # add libsort library

if(ALGO_APP)
    add_subdirectory(app) # add sort_app executable
endif()

if(ALGO_TESTS)
    enable_testing()
    add_subdirectory(tests) # add tests and benchmarks
endif()
