#include "ejercicio2.h"

vector<string> ordenarPorFrec(vector<string> s) {
    vector<string> vectorStringVacio(0);
    vector<vector<string>> aux(40, vectorStringVacio);
    vector<string> res(s.size());

    int i = 0;
    while (i < s.size()) {
        aux[s[i].length()].push_back(s[i]);
        i++;
    }

    int j = 0;
    int c = 0;
    while (j < aux.size()) {
        if (aux[j].size() > 0) {
            int k = 0;
            while (k < aux[j].size()) {
                res[c] = aux[j][k];
                k++;
                c++;
            }
        }
        j++;
    }

    return res;
}