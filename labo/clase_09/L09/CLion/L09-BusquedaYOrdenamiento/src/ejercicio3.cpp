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

    for (int i = 0; i < res.size(); i++) {
        if (i < ordered.size())
            res[i] = ordered[i];
        else
            res[i] = y[i - ordered.size()];
    }

    return res;
}

bool contieneOrdenada(vector<int> &s, int e) {
    if (s.size() == 0) {
        return false;
    } else if (s.size() == 1) {
        return s[0] == e;
    } else if (e < s[0]) {
        return false;
    } else if (e >= s[s.size() - 1]) {
        return s[s.size() - 1] == e;
    } else {
        return busqueda_binaria(s, e);
    }
}

bool busqueda_binaria(vector<int> &s, int e) {
    int low = 0;
    int high = s.size() - 1;
    while ((low + 1) < high) {
        int mid = (low + high) / 2;
        if (s[mid] <= e) {
            low = mid;
        } else {
            high = mid;
        }
    }

    return s[low] == e;
}


int indiceMenor(vector<int> &s, int e) {
    int low = 0;

    while (low < (s.size() - 1) && s[low] <= e && !(s[low + 1] > e)) {
        low++;
    }

    return low;
}

vector<int> apareamiento(vector<int> &a, vector<int> &b) {
    vector<int> c(a.size() + b.size());
    int i = 0;
    int j = 0;

    for (int k = 0; k < c.size(); ++k) {
        if (j >= b.size() || (i < a.size() && a[i] < b[j])) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
    }

    return c;
}

float calcularMediana(vector<int> ordenada) {
    float res = 0;

    int largo = ordenada.size();
    if (largo % 2 == 0) {
        int mitad = largo / 2;
        int x1 = ordenada[mitad];
        int x2 = ordenada[mitad + 1];
        float suma = x1 + x2;

        res = suma / 2;
    } else {
        res = ordenada[(largo + 1) / 2];
    }

    return res;
}

float medianaConOrdenamiento(vector<int> &ordered, vector<int> &y) {
    vector<int> concatenadas = concat(ordered, y);
    sort(concatenadas);

    return calcularMediana(concatenadas);
}

float medianaConApareamiento(vector<int> &x, vector<int> &y) {
    vector<int> c = apareamiento(x, y);
    return calcularMediana(c);
}

float medianaSinOrdenamiento(vector<int> &x, vector<int> &y) {
    return 0;
}
