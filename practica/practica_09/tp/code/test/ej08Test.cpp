#include "../lib/gtest.h"
#include "../src/ej08.h"

TEST(BurbujeoTest, caso) {
    vector<int> s{99, 23, 45, 5, 2, 1, 98, 23, 3};
    burbujeo(s);
}