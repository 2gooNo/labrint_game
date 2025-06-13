cmake_minimum_required(VERSION 3.10)
project(trap_maze)

set(CMAKE_CXX_STANDARD 17)

add_executable(trap_maze main.cpp)

target_include_directories(trap_maze PRIVATE include)