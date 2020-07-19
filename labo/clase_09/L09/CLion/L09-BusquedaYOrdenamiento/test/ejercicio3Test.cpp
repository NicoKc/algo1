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

TEST(BusquedaBinariaTest, caso1) {
    vector<int> x = {0, 2, 4, 6, 8, 10};

    bool result = busqueda_binaria(x, 4);

    ASSERT_TRUE(result);
}

TEST(IndiceMenorTest, caso1) {
    vector<int> x = {0, 2, 4, 6, 8, 10};
    int expected = 2;

    int result = indiceMenor(x, 5);

    ASSERT_EQ(result, expected);
}

TEST(IndiceMenorTest, caso2) {
    vector<int> x = {0, 2, 4, 6, 8, 10, 10, 10, 10};
    int expected = 4;

    int result = indiceMenor(x, 9);

    ASSERT_EQ(result, expected);
}

TEST(ApareamientoTest, caso1) {
    vector<int> x = {0, 2, 4, 6, 8, 10};
    vector<int> y = {1, 3, 5, 7, 9};

    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vector<int> result = apareamiento(x, y);

    ASSERT_EQ(expected, result);
}

TEST(MedianaConOrdenamientoTest, impar) {
    vector<int> x = {0, 2, 4, 6, 8, 10};
    vector<int> y = {1, 3, 5, 7, 9};

    float expected = 6;

    float result = medianaConOrdenamiento(x, y);

    ASSERT_EQ(expected, result);
}

TEST(MedianaConOrdenamientoTest, par) {
    vector<int> x = {0, 2, 4, 6, 8, 10};
    vector<int> y = {1, 3, 7, 9};

    float expected = 6.5;

    float result = medianaConOrdenamiento(x, y);

    ASSERT_EQ(expected, result);
}

TEST(MedianaConApareamiento, impar) {
    vector<int> x = {0, 2, 4, 6, 8, 10};
    vector<int> y = {1, 3, 5, 7, 9};

    float expected = 6;

    float result = medianaConApareamiento(x, y);

    ASSERT_EQ(expected, result);
}

TEST(MedianaConApareamiento, par) {
    vector<int> x = {0, 2, 4, 6, 8, 10};
    vector<int> y = {1, 3, 7, 9};

    float expected = 6.5;

    float result = medianaConApareamiento(x, y);

    ASSERT_EQ(expected, result);
}