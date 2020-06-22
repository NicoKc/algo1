#include "../lib/gtest.h"
#include "../src/ej06.h"

TEST(aTriplas, caso1) {
    matriz m{{1, 0, 0},
             {0, 5, 0}};

    vector<tuple<int, int, int>> tripla{make_tuple(0, 0, 1),
                                        make_tuple(1, 1, 5)};

    tuple<tuple<int, int>, vector<tuple<int, int, int>>> esperado = make_tuple(make_tuple(2, 3), tripla);

    tuple<tuple<int, int>, vector<tuple<int, int, int>>> result = aTriplas(m);

    ASSERT_EQ(esperado, result);
}

TEST(aMatriz, caso1) {
    matriz m{{1, 0, 0},
             {0, 5, 0}};

    vector<tuple<int, int, int>> tripla{make_tuple(0, 0, 1),
                                        make_tuple(1, 1, 5)};

    matriz result = aMatriz(tripla, make_tuple(2, 3));

    ASSERT_EQ(m, result);
}

TEST(transponerDispersa, caso1) {
    matriz m{{1, 0, 0},
             {0, 5, 0}};

    vector<tuple<int, int, int>> triplaEsperada{make_tuple(0, 1, 1),
                                                make_tuple(3, 5, 5)};

    vector<tuple<int, int, int>> tripla{make_tuple(1, 0, 1),
                                        make_tuple(5, 3, 5)};

    transponerDispersa(tripla);

    ASSERT_EQ(tripla, triplaEsperada);
}
