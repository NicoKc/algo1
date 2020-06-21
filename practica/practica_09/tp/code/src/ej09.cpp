#include "ej09.h"
#include "utils.h"
#include <iostream>

using namespace std;

void cocktailSort(vector<int> &a) {

    int i = 0;
    int j;
    while (i < (a.size() - 1) / 2) {
        j = 0;
        while (j < a.size() - 1) {
            if (a[j] > a[j + 1]) {
                swap(a, j, j + 1);
            }
            cout << "[" << i << "," << j << "]=";
            imprimir(a);
            j++;
        }

        cout << "Dereversa" << endl;
        while (j > 0) {

            if (a[j] < a[j - 1]) {
                swap(a, j, j - 1);
            }
            cout << "[" << i << "," << j << "]=";
            imprimir(a);
            j--;
        }

        i++;
    }

}//t(n)= O(n^2)