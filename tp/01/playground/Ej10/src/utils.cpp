#include "utils.h"

tuple<int, int> tupla(int x, int y) {
    return tuple<int, int>{x, y};
}

vector<tuple<int, int>> crearVector(tuple<int, int> tupla) {
    return vector<tuple<int, int>>{tupla};
}

vector<tuple<int, int>> crearVector(tuple<int, int> x, tuple<int, int> y) {
    return vector<tuple<int, int>>{x, y};
}

int dist(int x, int y) {
    return abs(x - y);
}

bool pertenece(tuple<int, int> tupla, int e) {
    return ((get<0>(tupla) == e) || (get<1>(tupla) == e));
}

void imprimir(vector<tuple<int, int>> v) {
    cout << "[";

    for (int i = 0; i < v.size(); i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << "(" << get<0>(v[i]) << ";" << get<1>(v[i]) << ")";
    }

    cout << "]" << endl;
}

bool sonIguales(tuple<int, int> x, tuple<int, int> y) {
    return ((get<0>(x) == get<0>(y)) && (get<1>(x) == get<1>(y))) ||
           ((get<0>(x) == get<1>(y)) && (get<1>(x) == get<0>(y)));
}

bool pertenece(vector<tuple<int, int>> ts, tuple<int, int> t) {
    bool result = false;

    int i = 0;
    while (i < ts.size() && !result) {
        if (sonIguales(ts[i], t)) {
            result = true;
        }
        i++;
    }

    return result;
}

bool match(vector<tuple<int, int>> result, vector<tuple<int, int>> expected) {
    bool r = true;

    int i = 0;
    while (i < result.size()) {
        r = r & pertenece(expected, result[i]);
        i++;
    }

    return r;
}