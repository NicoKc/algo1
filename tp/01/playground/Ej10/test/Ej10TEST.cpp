#include "../src/ej10.h"
#include "../src/utils.h"
#include "../lib/gtest.h"


TEST(PuntajeTEST, MenosDe10) {

    vector<int> s{0, 0, 1, 2, 0, 0, 0, 0, 0,-0, 3, 0, 0, 0, 4, 5, 0};

    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 0), crearVector(tupla(2, 3)))); // 2;3
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 1), crearVector(tupla(2, 3)))); // 2;3
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 4), crearVector(tupla(2, 3)))); // 3;2
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 5), crearVector(tupla(2, 3)))); // 3;2
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 6), crearVector(tupla(2, 3), tupla(10, 3)))); // 3;2 o 3;10
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 7), crearVector(tupla(3, 10)))); // 10;2 o 2;10
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 8), crearVector(tupla(10, 3)))); // 10;3 o 3;10
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 9), crearVector(tupla(10, 14)))); // 3;14 o 14;3
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 11), crearVector(tupla(10, 14)))); //10;14
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 12), crearVector(tupla(10, 14)))); //10;14
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 13), crearVector(tupla(15, 14)))); //14;15
    EXPECT_TRUE(match(obtenerTuplasMasCercanas(s, 16), crearVector(tupla(14, 15)))); //14;15
}

