#include "maxCantDeImparesConsecutivos.h"

int maxCantDeImparesConsecutivos(vector<int> s) {
    int result = 0;

    int acumulador = 0;
    int i = 0;
    while (i < s.size()) {
        if ((s[i] % 2) != 0) {
            acumulador++;
        } else {
            if (acumulador > result) {
                result = acumulador;
            }
            acumulador = 0;
        }
    }

    return result;
}