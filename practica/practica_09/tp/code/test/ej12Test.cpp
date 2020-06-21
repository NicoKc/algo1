#include "../lib/gtest.h"
#include "../src/ej12.h"

TEST(DosMitadesTest, caso1) {
    vector<int> s{1, 3, 5, 7, 100, 2, 3, 99};
    vector<int> expectedS{1, 2, 3, 3, 5, 7, 99, 100};

    dosMitades(s);

    ASSERT_EQ(s, expectedS);
}