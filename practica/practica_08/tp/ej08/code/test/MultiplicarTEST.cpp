#include <vector>
#include "../src/multiplicar.h"
#include "../lib/gtest.h"

using namespace std;

TEST(MultiplicarTEST, Caso) {

    vector<vector<int>> expected{{1,  8},
                                 {13, 14}};

    vector<vector<int>> m1{{1, 2, 3},
                           {4, 5, 6}};

    vector<vector<int>> m2{{5,  -1},
                           {1,  0},
                           {-2, 3}};

    vector<vector<int>> resultado = multiplicar(m1, m2);

    EXPECT_EQ(resultado, expected);
}
