cmake_minimum_required(VERSION 3.5)

project(workshop13 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(workshop13 src/main.cpp src/employee.cpp src/employee.h)
