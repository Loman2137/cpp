cmake_minimum_required(VERSION 3.31)
project(02_Events)

set(CMAKE_CXX_STANDARD 20)

add_executable(02_Events main.cpp
        event.h
        event.cpp)
