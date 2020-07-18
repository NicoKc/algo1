cmake_minimum_required(VERSION 3.16)
project(tp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(tp main.cpp src/ejercicios.cpp src/ejercicios.h test/ejerciciosTest.cpp src/ejercicio3.cpp src/ejercicio3.h src/definiciones.h test/ejercicio3Test.cpp src/ejercicio2.cpp src/ejercicio2.h test/ejercicio2Test.cpp)

set_target_properties(tp PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(tp PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(tp gtest)