#include "ej05.h"
#include <iostream>

int contraPicos(matriz m) {
    int res = 0;

    int i = 0;
    while (i < m.size()) {
        int j = 0;
        while (j < m[0].size()) {
            if (((i == 0) || (m[i - 1][j] < m[i][j])) &&
                ((i == (m.size() - 1)) || (m[i + 1][j] < m[i][j])) &&
                ((j == 0) || (m[i][j - 1] < m[i][j])) &&
                ((j == (m.size() - 1)) || (m[i][j + 1] < m[i][j]))) {
                cout << i << ";" << j << endl;
                res++;
            }
            j++;
        }
        i++;
    }

    return res;
}