#include "ejercicio1.h"
#include <iostream>

int primalizar(int value) {
    switch (value) {
        case 97:
            return 2;
        case 98:
            return 3;
        case 99:
            return 5;
        case 100:
            return 7;
        case 101:
            return 11;
        case 102:
            return 13;
        case 103:
            return 17;
        case 104:
            return 19;
        case 105:
            return 23;
        case 106:
            return 29;
        case 107:
            return 31;
        case 108:
            return 37;
        case 109:
            return 41;
        case 110:
            return 43;
        case 111:
            return 47;
        case 112:
            return 53;
        case 113:
            return 59;
        case 114:
            return 61;
        case 115:
            return 67;
        case 116:
            return 71;
        case 117:
            return 73;
        case 118:
            return 79;
        case 119:
            return 83;
        case 120:
            return 89;
        case 121:
            return 97;
        case 122:
            return 101;
    }

    return 0;
}

void swap(string &s, int i, int j) {
    char aux = s[i];
    s[i] = s[j];
    s[j] = aux;
}

int findMinPosition(string &s, int d) {
    int min = d;
    for (int i = d + 1; i < s.size(); i++) {
        if (s[i] < s[min])
            min = i;
    }
    return min;
}

void selectionSort(string &s) {
    for (int i = 0; i < s.size(); ++i) {
        int minPos = findMinPosition(s, i);
        swap(s, i, minPos);
    }
}

int ponderar(string p) {
    long res = 1;

    for (int i = 0; i < p.size(); i++) {
        res *= primalizar(p[i]);
    }

    return res;
}

bool esAnagramaConOrdenamiento(string p1, string p2) {
    selectionSort(p1);
    selectionSort(p2);
    return p1 == p2;
}//O(|p1| + |p2|)

bool esAnagramaConNumerosPrimos(string p1, string p2) {
    return ponderar(p1) == ponderar(p2);
}//O(|p1| + |p2|)

bool esAnagramaConMetodoPersonal(string p1, string p2) {
    return esAnagramaConNumerosPrimos(p1, p2);
}//O(|p1| + |p2|)
