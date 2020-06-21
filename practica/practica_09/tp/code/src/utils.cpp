#include "utils.h"

void swap(vector<int> &r, int i, int j) {
    int aux = r[i];
    r[i] = r[j];
    r[j] = aux;
}

void imprimir(vector<int> s) {
    cout << "[";

    for (int i = 0; i < s.size(); i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << s[i];
    }

    cout << "]" << endl;
}
