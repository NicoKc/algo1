#include "ej13.h"
#include "ej10.h"

void agregar(vector<int> &b, int e, int cant) {
    int i = 0;

    while (i < cant) {
        b.push_back(e);
        i++;
    }
}

vector<int> reconstruye(vector<int> a) {
    vector<int> b(0);

    int i = 0;
    while (i < a.size()) {
        agregar(b, i, a[i]);
        i++;
    }

    return insertionSort(b);
}