#include "../lib/gtest.h"
#include "../src/ejercicio2.h"
#include "../src/definiciones.h"

bool esMenor(vector<pair<int, int>> &xs, vector<pair<int, int>> &ys) {
    bool res = xs.size() < ys.size();

    if (!res && xs.size() == ys.size()) {
        int i = 0;
        while (i < xs.size() && !res) {
            res = xs[i].first < ys[i].first ||
                  (xs[i].first == ys[i].first && xs[i].second < ys[i].second);
            i++;
        }
    }

    return res;
}

void swap(vector<valle> &vs, int i, int j) {
    valle aux = vs[i];
    vs[i] = vs[j];
    vs[j] = aux;
}

void insert(vector<valle> &vs, int i) {
    for (int j = i; j > 0 && esMenor(vs[j], vs[j - 1]); j--) {
        swap(vs, j, j - 1);
    }
}

void insertionSort(vector<valle> &vs) {
    for (int i = 0; i < vs.size(); i++) {
        insert(vs, i);
    }
}

TEST(CasillerosVecinosTest, caso1) {
    matriz mat = {{1, 2,  3,  4},
                  {5, 6,  7,  8},
                  {9, 10, 11, 12}};
    pair<int, int> casillero = make_pair(1, 1);

    vector<pair<int, int>> expected = {make_pair(0, 0),
                                       make_pair(0, 1),
                                       make_pair(0, 2),
                                       make_pair(1, 0),
                                       make_pair(1, 2),
                                       make_pair(2, 0),
                                       make_pair(2, 1),
                                       make_pair(2, 2)};

    vector<pair<int, int>> result = casillerosVecinos(mat, casillero);

    ASSERT_EQ(result, expected);
}

TEST(CasillerosVecinosTest, caso2) {
    matriz mat = {{1, 2,  3,  4},
                  {5, 6,  7,  8},
                  {9, 10, 11, 12}};
    pair<int, int> casillero = make_pair(0, 0);

    vector<pair<int, int>> expected = {make_pair(0, 1),
                                       make_pair(1, 0),
                                       make_pair(1, 1)};

    vector<pair<int, int>> result = casillerosVecinos(mat, casillero);

    ASSERT_EQ(result, expected);
}

TEST(CasillerosVecinosTest, caso3) {
    matriz mat = {{1, 2,  3,  4},
                  {5, 6,  7,  8},
                  {9, 10, 11, 12}};
    pair<int, int> casillero = make_pair(2, 3);

    vector<pair<int, int>> expected = {make_pair(1, 2),
                                       make_pair(1, 3),
                                       make_pair(2, 2)};

    vector<pair<int, int>> result = casillerosVecinos(mat, casillero);

    ASSERT_EQ(result, expected);
}

TEST(CasillerosVecinosTest, caso4) {
    matriz mat = {{1, 2,  3,  4},
                  {5, 6,  7,  8},
                  {9, 10, 11, 12}};
    pair<int, int> casillero = make_pair(0, 1);

    vector<pair<int, int>> expected = {make_pair(0, 0),
                                       make_pair(0, 2),
                                       make_pair(1, 0),
                                       make_pair(1, 1),
                                       make_pair(1, 2)};

    vector<pair<int, int>> result = casillerosVecinos(mat, casillero);

    ASSERT_EQ(result, expected);
}

TEST(CasillerosVecinosTest, caso5) {
    matriz mat = {{1, 2,  3,  4},
                  {5, 6,  7,  8},
                  {9, 10, 11, 12}};
    pair<int, int> casillero = make_pair(1, 3);

    vector<pair<int, int>> expected = {make_pair(0, 2),
                                       make_pair(0, 3),
                                       make_pair(1, 2),
                                       make_pair(2, 2),
                                       make_pair(2, 3)};

    vector<pair<int, int>> result = casillerosVecinos(mat, casillero);

    ASSERT_EQ(result, expected);
}

TEST(obtenerValles, caso0) {
    matriz mat = {{97, 99, 98, 44},
                  {78, 89, 7,  (33)},
                  {5,  6,  38, 99}};
    pair<int, int> casillero = make_pair(1, 3);

    vector<valle> expected = {{make_pair(1, 3),
                                      make_pair(1, 2),
                                      make_pair(2, 1),
                                      make_pair(2, 0)}};

    vector<valle> result = obtenerValles(mat, casillero);

    ASSERT_EQ(result, expected);
}

TEST(obtenerValles, caso1) {
    matriz mat = {{1, 99, 98, 44},
                  {4, 89, 7,  (33)},
                  {5, 6,  38, 12}};
    pair<int, int> casillero = make_pair(1, 3);

    vector<valle> expected = {{make_pair(1, 3),
                                      make_pair(2, 3),
                                      make_pair(1, 2),
                                      make_pair(2, 1),
                                      make_pair(2, 0),
                                      make_pair(1, 0),
                                      make_pair(0, 0)},
                              {make_pair(1, 3),
                                      make_pair(1, 2),
                                      make_pair(2, 1),
                                      make_pair(2, 0),
                                      make_pair(1, 0),
                                      make_pair(0, 0)},
                              {make_pair(1, 3),
                                      make_pair(2, 3),
                                      make_pair(1, 2),
                                      make_pair(2, 1),
                                      make_pair(1, 0),
                                      make_pair(0, 0)},
                              {make_pair(1, 3),
                                      make_pair(1, 2),
                                      make_pair(2, 1),
                                      make_pair(1, 0),
                                      make_pair(0, 0)}};

    vector<valle> result = obtenerValles(mat, casillero);

    result.reserve(result.size());

    insertionSort(result);
    insertionSort(expected);

    ASSERT_EQ(result, expected);
}

TEST(obtenerValles, caso2) {
    matriz mat = {{1, 99, 2,  44},
                  {4, 89, 7,  (33)},
                  {5, 6,  38, 12}};
    pair<int, int> casillero = make_pair(1, 3);

    vector<valle> expected = {
        {make_pair(1, 3), make_pair(0, 2)},
        {make_pair(1, 3), make_pair(1, 2), make_pair(0, 2)},
        {make_pair(1, 3), make_pair(2, 3), make_pair(1, 2), make_pair(0, 2)},
        {make_pair(1, 3), make_pair(2, 3), make_pair(1, 2), make_pair(2, 1), make_pair(2, 0), make_pair(1, 0), make_pair(0, 0)},
        {make_pair(1, 3), make_pair(1, 2), make_pair(2, 1), make_pair(2, 0), make_pair(1, 0), make_pair(0, 0)},
        {make_pair(1, 3), make_pair(2, 3), make_pair(1, 2), make_pair(2, 1), make_pair(1, 0), make_pair(0, 0)},
        {make_pair(1, 3), make_pair(1, 2), make_pair(2, 1), make_pair(1, 0), make_pair(0, 0)}
    };

    vector<valle> result = obtenerValles(mat, casillero);

    insertionSort(result);
    insertionSort(expected);

    ASSERT_EQ(result, expected);
}

TEST(obtenerMenorValles, caso1) {
    matriz mat = {{1, 99, 98, 44},
                  {4, 89, 7,  (33)},
                  {5, 6,  38, 12}};
    pair<int, int> casillero = make_pair(1, 3);

    vector<valle> expected = {
        {make_pair(1, 3), make_pair(2, 3), make_pair(1, 2), make_pair(2, 1), make_pair(2, 0), make_pair(1, 0), make_pair(0, 0)},
        {make_pair(1, 3), make_pair(1, 2), make_pair(2, 1), make_pair(2, 0), make_pair(1, 0), make_pair(0, 0)},
        {make_pair(1, 3), make_pair(2, 3), make_pair(1, 2), make_pair(2, 1), make_pair(1, 0), make_pair(0, 0)},
        {make_pair(1, 3), make_pair(1, 2), make_pair(2, 1), make_pair(1, 0), make_pair(0, 0)}
    };

    vector<valle> result = obtenerValles(mat, casillero);

    insertionSort(result);
    insertionSort(expected);

    ASSERT_EQ(result, expected);
}