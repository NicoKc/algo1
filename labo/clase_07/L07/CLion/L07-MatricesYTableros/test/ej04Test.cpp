#include "../lib/gtest.h"
#include "../src/ej04.h"

TEST(trasponerTest, caso1) {
    matriz a{{1,  2,  3,  4},
             {5,  6,  7,  8},
             {9,  10, 11, 12},
             {13, 14, 15, 16}};

    matriz esperada{{1, 5, 9,  13},
                    {2, 6, 10, 14},
                    {3, 7, 11, 15},
                    {4, 8, 12, 16}};

    transponer(a);

    ASSERT_EQ(a, esperada);
}
