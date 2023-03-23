cmake_minimum_required(VERSION 3.24)
project(as3)

set(CMAKE_CXX_STANDARD 23)

add_executable(as3 main.cpp rational.cpp rational.h)
