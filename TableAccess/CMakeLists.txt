cmake_minimum_required(VERSION 3.13)
project(TableAccess)

set(CMAKE_CXX_STANDARD 14)

add_executable(TableAccess main.cpp DataService.cpp DataService.h DataModel.cpp DataModel.h BubbleSort.cpp BubbleSort.h)