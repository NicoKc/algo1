#include "../lib/gtest.h"
#include "../src/ej01.h"

TEST(encontrarTEST, noExiste) {
    vector<vector<int>> mat{{1, 2},
                            {3, 4}};
    pair<int, int> resultadoEsperado(-1, -1);

    pair<int, int> resultado = encontrar(mat, 5);

    ASSERT_EQ(resultado, resultadoEsperado);
}

TEST(encontrarTEST, existe) {
    vector<vector<int>> mat{{1, 2},
                            {3, 4}};
    pair<int, int> resultadoEsperado(1, 0);

    pair<int, int> resultado = encontrar(mat, 3);

    ASSERT_EQ(resultado, resultadoEsperado);
}