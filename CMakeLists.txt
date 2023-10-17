cmake_minimum_required(VERSION 3.25)
project(cplus_problems)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cplus_problems
        Helper.cpp
        Main.cpp
        Problem1.cpp
        Problem1.h
        Problem2.cpp
        Problem3.cpp
        Problem4.cpp
        Problem5.cpp
        Problem6.cpp
        Problem7.cpp
        Problem8.cpp
        Problem9.cpp
        Problem10.cpp)
