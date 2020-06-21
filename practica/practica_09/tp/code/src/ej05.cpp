#include "ej05.h"

int vecesQueAparece(vector<int> v, int e) {
    int veces = 0;

    int i = 0;
    while (i < v.size()) {
        if (v[i] == e) {
            veces++;
        }
        i++;
    }

    return veces;
}

int diferenciaEntreMaxYMin(vector<int> v) {
    int min = v[0];
    int max = v[0];
    int veces = 0;

    int i = 1;
    while (i < v.size()) {
        if (v[i] > max) {
            max = v[i];
        }

        if (v[i] < min) {
            min = v[i];
        }
        i++;
    }

    return max - min;
}

void agregar(int e, vector<pair<int, int>> &s) {
    int i = 0;

    while (i < s.size() && (i > 0 && s[i - 1].first != e)) {
        if (s[i].first == e) {
            s[i].second++;
        }

        i++;
    }

    if (i == s.size()) {
        s.push_back({e, 1});
    }
}

int maximo(vector<pair<int, int>> &s) {
    pair<int, int> maximo = s[0];
    int i = 1;

    while (i < s.size()) {
        if (s[i].second > maximo.second) {
            maximo = s[i];
        }

        i++;
    }

    return maximo.first;
}

int elementoQueMasVecesAparece(vector<int> v) {
    int i = 0;
    vector<pair<int, int>> apariciones;

    while (i < v.size()) {
        agregar(v[i], apariciones);
        i++;
    }

    return maximo(apariciones);
}