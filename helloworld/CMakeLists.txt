cmake_minimum_required(VERSION 3.7)
project(helloworld)

set(CMAKE_CXX_STANDARD 14)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

set(SOURCE_FILES helloworld.cpp)
add_executable(helloworld ${SOURCE_FILES})