#include "../lib/gtest.h"
#include "../src/ejercicio2.h"

TEST(OrdernarPorFrecTest, caso1) {
    vector<string> s = {"hola", "esto", "es", "una", "prueba"};
    vector<string> expected = {"es", "una", "hola", "esto", "prueba"};

    vector<string> resultado = ordenarPorFrec(s);

    ASSERT_EQ(expected, resultado);
}

