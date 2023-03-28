cmake_minimum_required(VERSION 3.19)
project(as3)

set(CMAKE_CXX_STANDARD 23)

add_executable(as3 main.cpp rational.cpp rational.h rational_calculator.cpp rational_calculator.h rational_processor.cpp rational_processor.h)
