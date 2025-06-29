cmake_minimum_required(VERSION 3.31)
project(05_Polmorphism)

set(CMAKE_CXX_STANDARD 20)

add_executable(05_Polmorphism main.cpp
        Rectangle.cpp
        Rectangle.h
        Square.cpp
        Square.h
)
