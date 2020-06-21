#include "ej06.h"
#include <vector>
#include <iostream>
#include <stdio.h>

int intToAscii(int number) {
    return '0' + number;
}

void reconstruir(string &s, vector<int> conteo) {
    int i = 0;
    int j = 0;
    while (j < s.size()) {
        while (conteo[i] == 0) {
            i++;
        }
        s[j] = (char) i;
        conteo[i]--;
        j++;
    }
}

vector<int> contar(string s) {
    vector<int> res(112956, 0);

    int i = 0;
    while (i < s.size()) {
        res[(int) s[i]]++;
        i++;
    }

    return res;
}

string ordenar(string s) {
    reconstruir(s, contar(s));
    return s;
}