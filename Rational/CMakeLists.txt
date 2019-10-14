cmake_minimum_required(VERSION 3.7)
project(Rational)

set(CMAKE_CXX_STANDARD 14)



set(SOURCE_FILES main.cpp Rational.cpp)
add_executable(main ${SOURCE_FILES})