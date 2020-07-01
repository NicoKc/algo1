cmake_minimum_required(VERSION 3.8)
project(Complejidad)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ejercicios.cpp ejercicios.h ej02.cpp ej02.h ej03.cpp ej03.h ej01.cpp ej01.h ej04.cpp ej04.h ej05.cpp ej05.h ej06.cpp ej06.h)
add_executable(Complejidad ${SOURCE_FILES})