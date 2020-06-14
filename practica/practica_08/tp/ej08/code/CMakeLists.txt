cmake_minimum_required(VERSION 3.16)
project(code)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(code main.cpp src/multiplicar.cpp src/multiplicar.h test/MultiplicarTEST.cpp)

set_target_properties(code PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(code PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(code gtest)
