#include "ej01.h"

pair<int, int> encontrar(matriz mat, int e) {
    pair<int, int> res;
    int i = 0;
    int j = 0;

    while (i < mat.size() && mat[i - 1][j] != e) {
        while (j < mat[i].size() && mat[i][j] != e) {
            j++;
        }
        i++;
    }

    if (i == mat.size() && j == mat.size()) {
        res = pair<int, int>(-1, -1);
    } else {
        res = pair<int, int>(i, j);
    }

    return res;
} //t(n) = O(n^2)