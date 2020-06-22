#include "ej04.h"

void transponer(matriz &m) {
    int i = 0;
    while (i < m.size() - 1) {
        int j = i + 1;
        while (j < m[0].size()) {
            int aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
            j++;
        }
        i++;
    }
}