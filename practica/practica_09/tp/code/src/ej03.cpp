#include <iostream>
#include "ej03.h"

using namespace std;

int calcularSuma(vector<bool> s) {
    int i = 0;
    int acumulado = 0;

    while (i < s.size()) {
        acumulado += s[i];
        i++;
    }

    return acumulado;
}

int calcularSumaOrdenada(vector<bool> s) {
    if (s[0] && s[s.size() - 1]) {
        return s.size();
    } else if (!s[0] && !s[s.size() - 1]) {
        return 0;
    } else {
        int inicio = 0;
        int fin = s.size() - 1;
        while (inicio + 1 < fin) {
            int mid = (inicio + fin) / 2;
            if (!s[inicio] && !s[mid]) {
                inicio = mid;
            } else {
                fin = mid;
            }
        }
        return s.size() - inicio - 1;
    }
}

int calcularSumaOrdenadaSon15y22(vector<bool> s) {
    if (s[0] && s[s.size() - 1]) {
        return s.size();
    } else if (!s[0] && !s[s.size() - 1]) {
        return 0;
    } else {
        int inicio = 0;
        int fin = s.size() - 1;
        while (inicio + 1 < fin) {
            int mid = (inicio + fin) / 2;
            cout << inicio << ";" << mid << ";" << fin << endl;
            if (!s[inicio] && !s[mid]) {
                inicio = mid;
            } else {
                fin = mid;
            }
        }
        cout << "la suma da:"<< ((s.size() - inicio - 1) * 22) + ((inicio + 1) * 15) << endl;
        return ((s.size() - inicio - 1) * 22) + ((inicio + 1) * 15);
    }
}
