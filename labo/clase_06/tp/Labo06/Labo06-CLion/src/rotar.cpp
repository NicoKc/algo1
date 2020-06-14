#include "rotar.h"

vector<int> rotar(vector<int> v, int k){
    vector<int> res;

    for (int i = k; i < v.size(); i++)
    {
        res.push_back(v[i]);
    }

    for (int i = 0; i < k; i++)
    {
        res.push_back(v[i]);
    }

    return res;
}
