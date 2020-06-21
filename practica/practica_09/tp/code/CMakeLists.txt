cmake_minimum_required(VERSION 3.16)
project(code)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(code main.cpp src/ej01.cpp src/ej01.h test/ej01Test.cpp src/ej02.cpp src/ej02.h test/ej02Test.cpp src/ej03.cpp src/ej03.h test/ej03Test.cpp test/ej04Test.cpp src/ej04.cpp src/ej04.h src/ej05.cpp src/ej05.h test/ej05Test.cpp src/ej06.cpp src/ej06.h test/ej06Test.cpp src/ej07.cpp src/ej07.h test/ej07Test.cpp src/ej08.cpp src/ej08.h test/ej08Test.cpp src/ej09.cpp src/ej09.h test/ej09Test.cpp src/utils.cpp src/utils.h src/ej10.cpp src/ej10.h test/ej10Test.cpp src/ej12.cpp src/ej12.h test/ej12Test.cpp src/ej13.cpp src/ej13.h test/ej13Test.cpp)

set_target_properties(code PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(code PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(code gtest)