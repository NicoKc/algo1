#include "../lib/gtest.h"
#include "../src/utils.h"

TEST(perteneceTEST, listaVacia) {
    vector<int> lista(0);

    bool resultado = pertenece(lista, 9);

    EXPECT_FALSE(resultado);
}

TEST(perteneceTEST, pertence) {
    vector<int> lista{1, 2, 3, 4, 5, 6, 7, 8, 9};

    bool resultado = pertenece(lista, 9);

    EXPECT_FALSE(resultado);
}

TEST(perteneceTEST, noPertence) {
    vector<int> lista{1, 2, 3, 4, 5, 6, 7, 8, 9};

    bool resultado = pertenece(lista, 10);

    EXPECT_FALSE(resultado);
}