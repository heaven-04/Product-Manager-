cmake_minimum_required(VERSION 4.0)
project(TP_C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TP_C__
        Product.h
        main.cpp
        Product.cpp)
