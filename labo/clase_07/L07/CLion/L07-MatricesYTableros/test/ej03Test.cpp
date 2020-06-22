#include "../lib/gtest.h"
#include "../src/ej03.h"

TEST(redimensionarTest, caso1) {
    matriz a{{1, 2,  3,  4},
             {5, 6,  7,  8},
             {9, 10, 11, 12}};

    matriz esperada{{1, 2, 3, 4,  5,  6},
                    {7, 8, 9, 10, 11, 12}};

    matriz aPrima = redimensionar(a, 6, 2);

    ASSERT_EQ(aPrima, esperada);
}
