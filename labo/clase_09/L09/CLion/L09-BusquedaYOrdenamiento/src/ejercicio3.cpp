#include <vector>
#include <iostream>
#include "ejercicio3.h"

using namespace std;

void imprimir(vector<int> &s) {
    cout << "[";
    for (int i = 0; i < s.size(); ++i) {
        cout << s[i];
        if (i != s.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;
}

void swap(vector<int> &s, int i, int j) {
    int aux = s[i];
    s[i] = s[j];
    s[j] = aux;
}

void burbujeo(vector<int> &s, int i) {
    for (int j = s.size() - 1; j > i; j--) {
        if (s[j] < s[j - 1])
            swap(s, j, j - 1);
        imprimir(s);
    }
}

void bubbleSort(vector<int> &s) {
    for (int i = 0; i < s.size(); i++) {
        burbujeo(s, i);
    }
}

void sort(vector<int> &s) {
    bubbleSort(s);
}

vector<int> concat(vector<int> &ordered, vector<int> &y) {
    vector<int> res(ordered.size() + y.size());

    for (int i = 0; i < ordered.size(); i++) {
        if (i < ordered.size())
            res[i] = ordered[i];
        else
            res[i] = y[i - ordered.size()];
    }

    return res;
}

vector<int> mergeConcat(vector<int> &ordered, vector<int> &s) {
    vector<int> res(0);
    return res;
}

float medianaConOrdenamiento(vector<int> &x, vector<int> &y) {
    return 0;
}

float medianaConApareamiento(vector<int> &x, vector<int> &y) {
    return 0;
}

float medianaSinOrdenamiento(vector<int> &x, vector<int> &y) {
    return 0;
}