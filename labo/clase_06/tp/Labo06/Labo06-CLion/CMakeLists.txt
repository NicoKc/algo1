cmake_minimum_required(VERSION 3.5)
project(Labo-testing)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(Labo-testing
        main.cpp
        src/esPrimo.h
        src/esPrimo.cpp
        src/puntaje.h
        src/puntaje.cpp
        src/sandia.h
        src/sandia.cpp
        src/rotar.h
        src/rotar.cpp
        src/subSecuenciaQueSuma.h
        src/subSecuenciaQueSuma.cpp
        src/agruparAnagramas.h
        src/agruparAnagramas.cpp
        test/esPrimoTEST.cpp
        test/puntajeTEST.cpp
        test/sandiaTEST.cpp
        test/rotarTEST.cpp
        test/agruparAnagramasTEST.cpp
        test/subSecuenciaQueSumaTEST.cpp
        )


set_target_properties(Labo-testing PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(Labo-testing PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(Labo-testing gtest)


