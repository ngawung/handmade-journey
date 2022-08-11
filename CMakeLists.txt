cmake_minimum_required(VERSION 3.24)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING
            "Default to debug" FORCE)
endif()

message("Build type is ${CMAKE_BUILD_TYPE}")

######### raylib ########
message(STATUS "Downloading raylib library")
include(FetchContent)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # don't build the supplied example games
FetchContent_Declare(raylib URL https://github.com/raysan5/raylib/archive/refs/tags/4.0.0.zip)
FetchContent_MakeAvailable(raylib)

project(handmade)
add_executable(handmade src/main.cpp)
target_link_libraries(handmade PUBLIC raylib)