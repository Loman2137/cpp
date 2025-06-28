cmake_minimum_required(VERSION 3.31)
project(03_Square)

set(CMAKE_CXX_STANDARD 20)

add_executable(03_Square main.cpp
        Point.h
        Point.cpp
        Rectangle.cpp
        Rectangle.h
)
