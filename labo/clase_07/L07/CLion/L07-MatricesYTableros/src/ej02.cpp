#include "ej02.h"

int productoPunto(vector<int> x, vector<int> y) {
    int res = 0;

    int i = 0;
    while (i < x.size()) {
        res += x[i] * y[i];
        i++;
    }

    return res;
}

matriz productoTranspuesta(matriz a) {
    vector<vector<int >> result(0);

    int i = 0;
    while (i < a.size()) {
        vector<int> aux(0);

        int j = 0;
        while (j < a.size()) {
            int acumulado = 0;
            int k = 0;
            while (k < a[0].size()) {
                acumulado = acumulado + (a[i][k]) * (a[j][k]);
                k++;
            }
            aux.push_back(acumulado);
            j++;
        }

        result.push_back(aux);
        i++;
    }

    return result;
}