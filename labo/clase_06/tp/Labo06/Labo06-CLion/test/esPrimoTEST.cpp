#include "../src/esPrimo.h"
#include "../lib/gtest.h"

TEST(EsPrimoTest, NumeroPrimo) {
    int n = 7;
    bool result = esPrimo(n);
    EXPECT_TRUE(result);
}

TEST(EsPrimoTest, NumeroCompuesto) {
    int n = 6;
    bool result = esPrimo(n);
    EXPECT_FALSE(result);
}

TEST(EsPrimoTest, CasoBorde) {
    int n = 2;
    bool result = esPrimo(n);
    EXPECT_TRUE(result);
}
