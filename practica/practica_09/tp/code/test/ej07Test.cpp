#include "../lib/gtest.h"
#include "../src/ej07.h"

TEST(MasCercanosATest, Caso1) {
    vector<int> res = masCercanosA({1, 2, 3, 4, 5, 6, 7, 8}, 4, 3);
    vector<int> esperado{2, 3, 5};

    ASSERT_EQ(res, esperado);
}
