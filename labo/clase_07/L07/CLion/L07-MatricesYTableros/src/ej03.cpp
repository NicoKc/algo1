#include "ej03.h"

matriz redimensionar(matriz a, int n, int m) {
    matriz res;

    vector<int> aux(0);

    int i = 0;
    while (i < a.size()) {
        int j = 0;
        while (j < a[i].size()) {
            aux.push_back(a[i][j]);

            if (aux.size() == n) {
                res.push_back(aux);
                aux = {};
            }

            j++;
        }
        i++;
    }

    return res;
}