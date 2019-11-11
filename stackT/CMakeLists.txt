cmake_minimum_required(VERSION 3.8)
project(stackT)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp stack.h)
add_executable(stackT ${SOURCE_FILES})