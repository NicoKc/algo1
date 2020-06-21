#include "../lib/gtest.h"
#include "../src/ej05.h"

TEST(VecesQueApareceTest, noAparece) {
    int result = vecesQueAparece({1, 2, 3, 4}, 99);

    ASSERT_EQ(result, 0);
}

TEST(VecesQueApareceTest, apareceUnaVez) {
    int result = vecesQueAparece({1, 2, 3, 4}, 4);

    ASSERT_EQ(result, 1);
}

TEST(VecesQueApareceTest, apareceMasDeUnaVez) {
    int result = vecesQueAparece({4, 2, 3, 4, 2, 4}, 4);

    ASSERT_EQ(result, 3);
}

TEST(DiferenciaEntreMaxYMinTest, todoIguales) {
    int result = diferenciaEntreMaxYMin({1, 1, 1, 1, 1});

    ASSERT_EQ(result, 0);
}

TEST(DiferenciaEntreMaxYMinTest, enLosExtremos) {
    int result = diferenciaEntreMaxYMin({8, 6, 5, 3, -3});

    ASSERT_EQ(result, 11);
}

TEST(DiferenciaEntreMaxYMinTest, random) {
    int result = diferenciaEntreMaxYMin({-5, -3, 2, 1, 9});

    ASSERT_EQ(result, 14);
}

TEST(ElementoQueMasVecesApareceTest, todosIguales) {
    int result = elementoQueMasVecesAparece({1, 1, 1, 1, 1});

    ASSERT_EQ(result, 1);
}

TEST(ElementoQueMasVecesApareceTest, todosUnaVez) {
    int result = elementoQueMasVecesAparece({3, 12, 21, 4, 5});

    ASSERT_EQ(result, 3);
}

TEST(ElementoQueMasVecesApareceTest, soloUnoMasDeUnaVez) {
    int result = elementoQueMasVecesAparece({3, 12, 21, 4, 5, 3});

    ASSERT_EQ(result, 3);
}