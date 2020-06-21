#include "ej08.h"
#include "utils.h"
#include <iostream>

using namespace std;

void burbujeo(vector<int> &a) {
    int i = 0;
    int j;
    while (i < a.size() - 1) {
        j = 0;
        while (j < a.size() - 1) {
            if (a[j] > a[j + 1]) {
                swap(a, j, j + 1);
            }
            cout << "[" << i << "," << j << "]=";
            imprimir(a);
            j++;
        }
        i++;
    }
}