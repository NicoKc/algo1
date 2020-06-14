#include "tuple"
#include "ej10.h"
#include "utils.h"

vector<tuple<int, int>> obtenerTuplas(vector<int> s) {
    vector<tuple<int, int>> tuplas(0);

    int i = 0;
    while (i < s.size()) {
        if (s[i] != 0) {
            int j = 0;
            while (j < s.size()) {
                if ((i != j) & (s[j] != 0)) {
                    tuplas.push_back(tuple<int, int>(i, j));
                }
                j++;
            }
        }
        i++;
    }

    return tuplas;
}

bool sonLasMasCercanas(vector<int> s, tuple<int, int> tupla, int indice) {
    bool result = true;
    int j = get<0>(tupla);
    int k = get<1>(tupla);

    int m = 0;
    while (m < s.size()) {
        if (m != indice && !pertenece(tupla, m) && s[m] != 0) {
            result &= (dist(m, indice) > dist(indice, j)) &
                      (dist(m, indice) >= dist(indice, k));
        }
        m++;
    }

    return result;
}

vector<tuple<int, int>> obtenerTuplasMasCercanas(vector<int> s, int indice) {
    vector<tuple<int, int>> tuplas = obtenerTuplas(s);
    vector<tuple<int, int>> result(0);

    int i = 0;
    while (i < tuplas.size()) {
        if (sonLasMasCercanas(s, tuplas[i], indice)) {
            result.push_back(tuplas[i]);
        }
        i++;
    }
    imprimir(result);
    return result;
}