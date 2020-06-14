#include <string>
#include "agruparAnagramas.h"

bool esUnaPermutacion(string x, string y) {
    bool result = x.size() == y.size();

    int i = 0;
    while (i < y.size() && result) {
        result &= (x.find(y[i]) != string::npos);
        i++;
    }

    return result;
}

vector<vector<string>> agruparAnagramas(vector<string> v) {
    vector<vector<string>> res(0);

    int i = 0;
    while (i < v.size()) {

        int j = 0;
        bool seAgrego = false;
        while (j < res.size() && !seAgrego) {
            if (esUnaPermutacion(res[j][0], v[i])) {
                res[j].push_back(v[i]);
                seAgrego = true;
            }
            j++;
        }

        if (!seAgrego) {
            res.push_back({v[i]});
        }

        i++;
    }

    return res;
}

