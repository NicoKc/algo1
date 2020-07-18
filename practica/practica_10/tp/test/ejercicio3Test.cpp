#include "../lib/gtest.h"
#include "../src/ejercicio3.h"

TEST(EsFilaBatidasTest, esFilaBatida) {
    matriz mat = {{1, 2, 6},
                  {6, 1, 2},
                  {2, 6, 1},
                  {1, 2, 6}};

    bool result = esFilaBatidas(mat);

    ASSERT_TRUE(result);
}

TEST(EsFilaBatidasTest, noEsFilaBatida) {
    matriz mat = {{1, 1, 3},
                  {3, 1, 1},
                  {3, 3, 1}};

    bool result = esFilaBatidas(mat);

    ASSERT_FALSE(result);
}

TEST(EsFilaBatidasTest, noEsFilaBatida2) {
    matriz mat = {{1, 1, 3},
                  {2, 1, 1},
                  {3, 1, 1}};

    bool result = esFilaBatidas(mat);

    ASSERT_FALSE(result);
}
