#include "../lib/gtest.h"
#include "../src/ej13.h"

TEST(ReconstruyeTest, caso1) {
    vector<int> a{0, 0, 1, 5, 0, 0};
    vector<int> expectedB{2, 3, 3, 3, 3, 3};

    vector<int> b = reconstruye(a);

    ASSERT_EQ(expectedB, b);
}

TEST(ReconstruyeTest, caso2) {
    vector<int> a{0, 5, 0, 0, 0, 1, 1};
    vector<int> expectedB{1, 1, 1, 1, 1, 5, 6we};

    vector<int> b = reconstruye(a);

    ASSERT_EQ(expectedB, b);
}