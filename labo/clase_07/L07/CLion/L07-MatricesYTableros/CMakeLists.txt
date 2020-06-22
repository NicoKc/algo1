cmake_minimum_required(VERSION 3.5)
project(L07-MatricesYTableros)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(L07-MatricesYTableros
        main.cpp
        src/solucion.cpp
        src/solucion.h
        test/solucionTest.cpp
        src/ej02.cpp src/ej02.h src/definiciones.h test/ej02Test.cpp src/ej03.cpp src/ej03.h test/ej03Test.cpp src/ej04.cpp src/ej04.h test/ej04Test.cpp src/ej05.cpp src/ej05.h test/ej05Test.cpp src/ej06.cpp src/ej06.h test/ej06Test.cpp)



set_target_properties(L07-MatricesYTableros PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(L07-MatricesYTableros PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(L07-MatricesYTableros gtest)


