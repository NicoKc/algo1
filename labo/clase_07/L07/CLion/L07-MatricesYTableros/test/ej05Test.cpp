#include "../lib/gtest.h"
#include "../src/ej05.h"

TEST(contarPicosTest, caso1) {
    matriz a{{1, 2},
             {2, 3}};

    int resultado = contraPicos(a);

    ASSERT_EQ(1, resultado);
}

TEST(contarPicosTest, caso2) {
    matriz a{{4, 2},
             {2, 3}};

    int resultado = contraPicos(a);

    ASSERT_EQ(2, resultado);
}

TEST(contarPicosTest, caso3) {
    matriz a{{9, 2,  9},
             {2, 10, 4},
             {9, 3,  9}};

    int resultado = contraPicos(a);

    ASSERT_EQ(5, resultado);
}

TEST(contarPicosTest, caso4) {
    matriz a{{1, 1, 9},
             {8, 1, 99},
             {1, 1, 9}};

    int resultado = contraPicos(a);

    ASSERT_EQ(2, resultado);
}


TEST(contarPicosTest, caso5) {
    matriz a{{99,  1,   99,  3,   99,  42,  99,  23,  99},
             {1,   99,  9,   99,  3,   99,  1,   99,  14},
             {99,  1,   99,  3,   99,  42,  99,  23,  99},
             {1,   99,  9,   99,  3,   99,  1,   99,  14},
             {99,  1,   99,  3,   99,  42,  99,  23,  99},
             {1,   99,  9,   99,  3,   99,  1,   99,  14},
             {99,  1,   99,  3,   99,  42,  99,  23,  99},
             {1,   99,  9,   99,  3,   99,  1,   99,  14},
             {100, 100, 100, 100, 100, 100, 100, 100, 100}};

    int resultado = contraPicos(a);

    ASSERT_EQ(32, resultado);
}