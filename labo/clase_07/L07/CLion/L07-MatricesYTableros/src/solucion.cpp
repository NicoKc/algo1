#include "solucion.h"

//Ejercicio 1
void imprimir(vector<vector<int>> mat) {
    int i = 0;

    while (i < mat.size()) {
        int j = 0;
        while (j < mat[i].size()) {
            cout << mat[i][j] << "\t";
            j++;
        }
        cout << "\n";
        i++;
    }
}

