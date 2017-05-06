cmake_minimum_required(VERSION 3.6)
project(mapsearch)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin/")

set(CMAKE_CXX_FLAGS "-D_USE_MATH_DEFINES -O3 -std=c++11")

add_subdirectory(src)
add_subdirectory(test)