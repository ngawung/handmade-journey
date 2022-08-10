cmake_minimum_required(VERSION 3.24)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING
            "Default to debug" FORCE)
endif()

message("Build type is ${CMAKE_BUILD_TYPE}")

project(handmade)
add_executable(handmade src/main.cpp)