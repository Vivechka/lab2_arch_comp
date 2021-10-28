cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(MyProject)

add_library(calculator
    include/calculator.h
    calculator.cpp
)

target_include_directories(calculator PUBLIC
        "include"
)

add_executable(main
  main.cpp
)

target_link_libraries(main calculator)