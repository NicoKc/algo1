#include "restarAcumulado.h"

vector<int> restarAcumulado(vector<int> s, int x) {
    vector<int> res(0);

    int i = 0;
    while (i < s.size()) {
        int acumulado = s[i];
        if (i != 0) {
            acumulado = acumulado + (x - res[i - 1]);
        }
        res.push_back(x - acumulado);
        i++;
    }

    return res;
}