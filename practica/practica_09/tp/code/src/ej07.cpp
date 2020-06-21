//
// Created by nico on 20/06/20.
//

#include "ej07.h"

vector<int> masCercanosA(vector<int> s, int e, int k) {
    vector<int> res(0);

    int i = 0;
    while (i < s.size() && s[i] != e) {
        i++;
    }

    if (i + (e / 2) < s.size() - 1 && i - (e / 2) >= 0) {
        int j = i - (e / 2);
        while (j < i + (e / 2)) {
            if (j != i)
                res.push_back(s[j]);

            j++;
        }
    }

    return res;
}