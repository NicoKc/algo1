#include "ej06.h"

tuple<tuple<int, int>, vector<tuple<int, int, int>>> aTriplas(matriz m) {
    tuple<int, int> dimension = make_tuple(m.size(), m[0].size());
    vector<tuple<int, int, int>> s(0);

    int i = 0;
    while (i < m.size()) {
        int j = 0;
        while (j < m[0].size()) {
            if (m[i][j] != 0) {
                s.push_back(make_tuple(i, j, m[i][j]));
            }
            j++;
        }
        i++;
    }

    return make_tuple(dimension, s);
}

matriz aMatriz(vector<tuple<int, int, int>> m, tuple<int, int> dim) {
    vector<int> aux(get<1>(dim), 0);
    matriz res(get<0>(dim), aux);

    int i = 0;
    while (i < m.size()) {
        res[get<0>(m[i])][get<1>(m[i])] = get<2>(m[i]);
        i++;
    }

    return res;
}

void transponerDispersa(vector<tuple<int, int, int>> &m) {
    int i = 0;
    while (i < m.size()) {
        m[i] = make_tuple(get<1>(m[i]), get<0>(m[i]), get<2>(m[i]));
        i++;
    }
}