cmake_minimum_required(VERSION 3.24)

set(CMAKE_BUILD_TYPE "Debug" CACHE BOOL "" FORCE)

project(HelloWorld)
add_executable(main main.cpp)