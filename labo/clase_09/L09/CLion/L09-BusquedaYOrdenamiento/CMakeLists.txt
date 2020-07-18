cmake_minimum_required(VERSION 3.5)
project(L09-BusquedaYOrdenamiento)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(L09-BusquedaYOrdenamiento
        main.cpp
        src/ejercicio1.cpp
        src/ejercicio1.h
        test/ejercicio1Test.cpp)



set_target_properties(L09-BusquedaYOrdenamiento PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(L09-BusquedaYOrdenamiento PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(L09-BusquedaYOrdenamiento gtest)


