#include "utils.h"

bool pertenece(vector<int> s, int e) {
    bool result = false;

    int i = 0;
    while (i < s.size() && !result) {
        result &= (e == s[i]);
        i++;
    }

    return result;
}