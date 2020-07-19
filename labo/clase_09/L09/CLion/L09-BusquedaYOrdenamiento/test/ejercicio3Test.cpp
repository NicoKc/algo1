#include "../lib/gtest.h"
#include "../src/ejercicio3.h"

TEST(SortTest, caso1) {
    vector<int> s = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sort(s);

    ASSERT_EQ(s, expected);
}

TEST(ConcatTest, caso2) {
    vector<int> x = {0, 2, 4, 6, 8, 10};
    vector<int> y = {9, 7, 5, 3, 1};

    vector<int> expected = {0, 2, 4, 6, 8, 10, 9, 7, 5, 3, 1};

    vector<int> result = concat(x, y);

    ASSERT_EQ(expected, result);
}

TEST(MergeTest, asd) {}

TEST(MedianaTest, asd) {


}

TEST(asd, asd) {}