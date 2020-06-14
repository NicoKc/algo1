#include "../src/rotar.h"
#include "../lib/gtest.h"

TEST(RotarTEST, Rotar) {
    vector<int> aRotar{1,2,3,4,5,6};
    int cuantoRotar = 2;
    vector<int> vectorEsperado{3,4,5,6,1,2};

    vector<int> vectorObtenido = rotar(aRotar, cuantoRotar);

    EXPECT_EQ(vectorObtenido, vectorEsperado);
}