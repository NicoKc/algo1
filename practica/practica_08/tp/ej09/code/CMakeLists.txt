cmake_minimum_required(VERSION 3.16)
project(code)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(code main.cpp src/sumasAcumuladas.cpp src/sumasAcumuladas.h src/utils.cpp src/utils.h test/SumasAcumuladasTEST.cpp src/sumasAcumuladasPro.cpp src/sumasAcumuladasPro.h)

set_target_properties(code PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(code PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(code gtest)
