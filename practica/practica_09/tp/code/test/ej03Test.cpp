#include "../lib/gtest.h"
#include "../src/ej03.h"

TEST(CalcularSumaTEST, caso1) {
    vector<bool> s{1, 0, 0, 1, 0, 1};
    vector<bool> sOrdenado{0, 0, 0, 1, 1, 1};
    int resultadoEsperado = 3;
    int resultadoEsperado15y22 = (15*3) + (22*3);

    int resultado1 = calcularSuma(s);
    int resultado2 = calcularSumaOrdenada(sOrdenado);
    int resultado3 = calcularSumaOrdenadaSon15y22(sOrdenado);

    ASSERT_EQ(resultadoEsperado, resultado1);
    ASSERT_EQ(resultadoEsperado, resultado2);
    ASSERT_EQ(resultadoEsperado15y22, resultado3);
}

TEST(CalcularSumaTEST, caso2) {
    vector<bool> s{1, 1, 0, 1, 1, 1};
    vector<bool> sOrdenado{0, 1, 1, 1, 1, 1};
    int resultadoEsperado = 5;
    int resultadoEsperado15y22 = (15*1) + (22*5);

    int resultado1 = calcularSuma(s);
    int resultado2 = calcularSumaOrdenada(sOrdenado);
    int resultado3 = calcularSumaOrdenadaSon15y22(sOrdenado);

    ASSERT_EQ(resultadoEsperado, resultado1);
    ASSERT_EQ(resultadoEsperado, resultado2);
    ASSERT_EQ(resultadoEsperado15y22, resultado3);
}