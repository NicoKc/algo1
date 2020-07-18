#include "../lib/gtest.h"
#include "../src/ejercicios.h"

TEST(RotacionTest, caso1) {
    matriz mat = {{1, 2,  3,  4},
                  {5, 6,  7,  8},
                  {9, 10, 11, 12}};
    int f = 2;
    int c = 1;

    matriz expected = {{10, 11, 12, 9},
                       {2,  3,  4,  1},
                       {6,  7,  8,  5}};

    matriz result = rotacion(mat, f, c);

    ASSERT_EQ(result, expected);
}

TEST(RotacionTest, caso2) {
    matriz mat = {{1, 2,  3,  4},
                  {5, 6,  7,  8},
                  {9, 10, 11, 12}};
    int f = 1;
    int c = 0;

    matriz expected = {{5, 6,  7,  8},
                       {9, 10, 11, 12},
                       {1, 2,  3,  4}};

    matriz result = rotacion(mat, f, c);

    ASSERT_EQ(result, expected);
}
