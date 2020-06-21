#include "../lib/gtest.h"
#include "../src/ej09.h"

TEST(CocktailSortTest, caso1) {
    vector<int> a{4, 2, 1, 5, 0};
    vector<int> aSorted{0, 1, 2, 4, 5};

    cocktailSort(a);

    ASSERT_EQ(a, aSorted);
}