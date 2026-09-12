cmake_minimum_required(VERSION 4.3)
project(PurnellNumerical)

set(CMAKE_CXX_STANDARD 20)

add_library(PurnellNumerical STATIC library.cpp specific_angular_momentum.cpp)

add_executable(PurnellNumericalTest tests.cpp)

target_link_libraries(PurnellNumericalTest PurnellNumerical)