cmake_minimum_required(VERSION 3.19)
project(as3)

set(CMAKE_CXX_STANDARD 23)

add_executable(as3 main.cpp src/rational.cpp inc/rational.h src/rational_calculator.cpp inc/rational_calculator.h src/rational_processor.cpp inc/rational_processor.h inc/containsFunc.h)
