cmake_minimum_required(VERSION 3.2)

project(lab5)

add_executable(lab5
        main.cpp
        list.hpp
        Polygon.hpp
        Polygon.cpp
        )

set_property(TARGET lab5 PROPERTY CXX_STANDARD 17)