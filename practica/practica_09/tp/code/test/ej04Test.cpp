#include "../src/ej04.h"
#include "../lib/gtest.h"

TEST(CantidadDeVecesQueApareceTest, caso1) {
    matriz mat{{1, 2, 3},
               {3, 4, 5}};
    int e = 3;

    int resultado = cantidadDeVecesQueAparece(mat, e);

    ASSERT_EQ(resultado, 2);
}

TEST(CantidadDeVecesQueApareceTest, caso2) {
    matriz mat{{1, 2, 3},
               {2, 3, 4}};
    int e = 4;

    int resultado = cantidadDeVecesQueAparece(mat, e);

    ASSERT_EQ(resultado, 1);
}

TEST(CantidadDeVecesQueApareceTest, caso3) {
    matriz mat{{1, 2, 3},
               {2, 3, 4}};
    int e = 99;

    int resultado = cantidadDeVecesQueAparece(mat, e);

    ASSERT_EQ(resultado, 0);
}