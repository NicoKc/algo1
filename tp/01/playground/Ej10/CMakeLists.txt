cmake_minimum_required(VERSION 3.16)
project(Ej10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(Ej10 main.cpp src/opcion1.cpp src/opcion1.h src/ej10.cpp src/ej10.h test/Ej10TEST.cpp src/utils.cpp src/utils.h)

set_target_properties(Ej10 PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(Ej10 PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(Ej10 gtest)