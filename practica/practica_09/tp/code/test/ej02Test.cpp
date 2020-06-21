#include "../lib/gtest.h"
#include "../src/ej02.h"

TEST(EncontrarFaltante, caso1) {
    vector<int> s{0,1,2,4,5,6,7};

    int result = encontrarFaltante(s);

    ASSERT_EQ(3, result);
}

TEST(EncontrarFaltante, caso2) {
    vector<int> s{0,1,2,3,5,6,7};

    int result = encontrarFaltante(s);

    ASSERT_EQ(4, result);
}

TEST(EncontrarFaltante, caso3) {
    vector<int> s{0};

    int result = encontrarFaltante(s);

    ASSERT_EQ(1, result);
}