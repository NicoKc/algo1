#include "../lib/gtest.h"
#include "../src/ej10.h"

TEST(ej10, a) {
    vector<int> s{1, 2, 3, 4, 5};
    vector<int> resultadoEsperado{1, 2, 3, 4, 5};

    vector<int> resultInsertionSort = insertionSort(s);
    ASSERT_EQ(resultadoEsperado, resultInsertionSort);

    vector<int> resultSelectionSort = selectionSort(s);
    ASSERT_EQ(resultadoEsperado, resultSelectionSort);

    vector<int> resultBubbleSort = bubbleSort(s);
    ASSERT_EQ(resultadoEsperado, resultBubbleSort);
}

TEST(ej10, b) {
    vector<int> s{5, 4, 3, 2, 1};
    vector<int> resultadoEsperado{1, 2, 3, 4, 5};

    vector<int> resultInsertionSort = insertionSort(s);
    vector<int> resultSelectionSort = selectionSort(s);
    vector<int> resultBubbleSort = bubbleSort(s);

    ASSERT_EQ(resultadoEsperado, resultInsertionSort);
    ASSERT_EQ(resultadoEsperado, resultSelectionSort);
    ASSERT_EQ(resultadoEsperado, resultBubbleSort);
}

TEST(ej10, c) {
    vector<int> s{1, 3, 5, 2, 4};
    vector<int> resultadoEsperado{1, 2, 3, 4, 5};

    vector<int> resultInsertionSort = insertionSort(s);
    vector<int> resultSelectionSort = selectionSort(s);
    vector<int> resultBubbleSort = bubbleSort(s);

    ASSERT_EQ(resultadoEsperado, resultInsertionSort);
    ASSERT_EQ(resultadoEsperado, resultSelectionSort);
    ASSERT_EQ(resultadoEsperado, resultBubbleSort);
}

TEST(ej10, d) {
    vector<int> s{1, 1, 1, 2, 2, 2};
    vector<int> resultadoEsperado{1, 1, 1, 2, 2, 2};

    vector<int> resultInsertionSort = insertionSort(s);
    vector<int> resultSelectionSort = selectionSort(s);
    vector<int> resultBubbleSort = bubbleSort(s);

    ASSERT_EQ(resultadoEsperado, resultInsertionSort);
    ASSERT_EQ(resultadoEsperado, resultSelectionSort);
    ASSERT_EQ(resultadoEsperado, resultBubbleSort);
}

TEST(ej10, e) {
    vector<int> s{1, 2, 1, 2, 1, 2, 1, 2};
    vector<int> resultadoEsperado{1, 1, 1, 1, 2, 2, 2, 2};

    vector<int> resultInsertionSort = insertionSort(s);
    vector<int> resultSelectionSort = selectionSort(s);
    vector<int> resultBubbleSort = bubbleSort(s);

    ASSERT_EQ(resultadoEsperado, resultInsertionSort);
    ASSERT_EQ(resultadoEsperado, resultSelectionSort);
    ASSERT_EQ(resultadoEsperado, resultBubbleSort);
}

TEST(ej10, f) {
    vector<int> s{1, 10, 50, 30, 25, 4, 6};
    vector<int> resultadoEsperado{1, 4, 6, 10, 25, 30, 50};

    vector<int> resultInsertionSort = insertionSort(s);
    vector<int> resultSelectionSort = selectionSort(s);
    vector<int> resultBubbleSort = bubbleSort(s);

    ASSERT_EQ(resultadoEsperado, resultInsertionSort);
    ASSERT_EQ(resultadoEsperado, resultSelectionSort);
    ASSERT_EQ(resultadoEsperado, resultBubbleSort);
}
