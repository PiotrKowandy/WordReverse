cmake_minimum_required(VERSION 3.9)
project(reverse_string)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(googletest)