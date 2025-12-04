cmake_minimum_required(VERSION 4.0)
project(clase01RU)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(clase01RU
        utiles.cpp
        utiles.h
        main.cpp)
