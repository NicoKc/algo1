#include "ejercicio2.h"
#include <iostream>
#include <string>

string print(pair<int, int> in) {
    return "(" + to_string(in.first) + ";" + to_string(in.second) + ")";
}

void print(vector<pair<int, int>> input) {
    cout << "[";

    for (int i = 0; i < input.size(); i++) {
        cout << print(input.at(i));
        if (i != input.size() - 1)
            cout << ",";
    }

    cout << "]" << endl;
}

void print(vector<valle> const &input) {
    cout << "[";

    for (int i = 0; i < input.size(); i++) {
        print(input[i]);
        if (i != input.size() - 1)
            cout << ",";
    }

    cout << "]" << endl;
}

vector<pair<int, int>> casillerosVecinos(matriz m, pair<int, int> casillero) {
    vector<pair<int, int>> res(0);
    int x = casillero.first;
    int y = casillero.second;

    int i = x - 1;
    int j = y - 1;

    while (i <= (x + 1)) {
        if (i >= 0 && i < m.size()) {
            while (j <= (y + 1)) {
                if (j >= 0 && j < m[0].size()) {
                    if (i != x || j != y)
                        res.push_back(make_pair(i, j));
                }
                j++;
            }
            j = y - 1;
        }
        i++;
    }

    return res;
}

vector<pair<int, int>> casillerosVecinosMenores(matriz m, pair<int, int> casillero) {
    vector<pair<int, int>> res(0);
    int x = casillero.first;
    int y = casillero.second;

    int i = x - 1;
    int j = y - 1;

    while (i <= (x + 1)) {
        if (i >= 0 && i < m.size()) {
            while (j <= (y + 1)) {
                if (j >= 0 && j < m[0].size()) {
                    if ((i != x || j != y) && (m[x][y] > m[i][j]))
                        res.push_back(make_pair(i, j));
                }
                j++;
            }
            j = y - 1;
        }
        i++;
    }

    return res;
}

vector<valle> obtenerValles(matriz m, pair<int, int> casillero) {
    vector<valle> res(0);
    vector<pair<int, int>> cv = casillerosVecinosMenores(m, casillero);

    if (cv.size() == 0)
        return {{casillero}};

    int i = 0;
    while (i < cv.size()) {
        vector<valle> ov = obtenerValles(m, cv[i]);
        int j = 0;
        while (j < ov.size()) {
            valle nuevo{casillero};
            for (int k = 0; k < ov[j].size(); ++k) {
                nuevo.push_back(ov[j][k]);
            }
            res.push_back(nuevo);
            j++;
        }
        i++;
    }
    return res;
}

