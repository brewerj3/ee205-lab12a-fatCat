cmake_minimum_required(VERSION 3.22)

set(projname "fatCat")
project(${projname})

set(CMAKE_CXX_STANDARD 14)

add_executable(${projname} main.cpp Weight.h Weight.cpp)
