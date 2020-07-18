#include "ejercicios.h"
#include <iostream>
#include <string>


matriz rotacion(matriz m, int f, int c) {
    matriz res(m.size(), vector<int>(m[0].size(), 0));

    int fila = 0;
    int columna = 0;
    int i = 0;
    while (i < m.size()) {
        int j = 0;
        while (j < m[0].size()) {

            fila = (i + f) % m.size();
            columna = (j + c) % m[0].size();

            res[i][j] = m[fila][columna];

            j++;
        }
        i++;
    }

    return res;
}
