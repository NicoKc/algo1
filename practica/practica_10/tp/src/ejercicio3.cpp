#include "ejercicio3.h"
#include <vector>

void swap(vector<int> &xs, int i, int j) {
    int aux = xs[i];
    xs[i] = xs[j];
    xs[j] = aux;
}

void insert(vector<int> &xs, int i) {
    for (int j = i; j > 0 && xs[j] < xs[j - 1]; j--) {
        swap(xs, j, j - 1);
    }
}

void insertionSort(vector<int> &xs) {
    for (int i = 0; i < xs.size(); i++) {
        insert(xs, i);
    }
}

bool mismosElementos(vector<int> x, vector<int> y) {
    int largo = x.size();
    int i = 0;
    while (i < largo && x[i] == y[i]) {
        i++;
    }

    return i == largo;
}

bool sonIguales(vector<int> x, vector<int> y) {
    return x.size() == y.size() && mismosElementos(x, y);
}

bool esFilaBatidas(matriz mat) {
    bool res = true;
    insertionSort(mat[0]);

    for (int i = 1; i < mat.size() && res; i++) {
        insertionSort(mat[i]);
        res = res && sonIguales(mat[0], mat[i]);
    }

    return res;
}
