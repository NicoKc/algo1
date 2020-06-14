#include <vector>
#include "../lib/gtest.h"
#include "../src/maxCantDeImparesConsecutivos.h"

TEST(maxCantDeImparesConsecutivosTest, sinImpares) {
    vector<int> s{2, 4, 6};

    int result = maxCantDeImparesConsecutivos(s);

    EXPECT_EQ(result, 0);
}

TEST(maxCantDeImparesConsecutivosTest, con1Impar) {
    vector<int> s{2, 4, 7, 6};

    int result = maxCantDeImparesConsecutivos(s);

    EXPECT_EQ(result, 1);
}

TEST(maxCantDeImparesConsecutivosTest, con7Impar) {
    vector<int> s{2, 4, 5, 5, 3, 5, 19, 27, 31, 10};

    int result = maxCantDeImparesConsecutivos(s);

    EXPECT_EQ(result, 7);
}