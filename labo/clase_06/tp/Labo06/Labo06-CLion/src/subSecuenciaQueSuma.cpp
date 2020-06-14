#include "subSecuenciaQueSuma.h"

vector<int> obtenerVectorDesde(vector<int> s, int desde, int hasta) {
    vector<int> result;
    int i = desde;

    while (i <= hasta) {
        result.push_back(s[i]);
        i++;
    }

    return result;
}

vector<vector<int>> obtenerSubSecuencias(vector<int> s) {
    vector<vector<int>> result(0);

    int i = 0;
    while (i < s.size()) {
        int j = 0;
        while (j < s.size()) {
            result.push_back(obtenerVectorDesde(s, i, j));
            j++;
        }
        i++;
    }

    return result;
}

int suma(vector<int> s) {
    int suma = 0;

    int i = 0;
    while (i < s.size()) {
        suma += s[i];
        i++;
    }

    return suma;
}

bool subSecunciaQueSuma(vector<int> s, int n) {
    bool result = false;

    vector<vector<int>> ss = obtenerSubSecuencias(s);

    int i = 0;
    while (i < ss.size() && !result) {
        if (n == suma(ss[i])) {
            result = true;
        }
        i++;
    }

    return result;
}
