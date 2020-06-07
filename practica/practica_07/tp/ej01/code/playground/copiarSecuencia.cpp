#include <iostream>
#include "copiarSecuencia.h"

using namespace std;

void invariante(vector<int> s, vector<int> r, int i)
{
    bool primeraParte = 0 <= i & i <= s.size() & r.size() == i;

    int j = 0;
    bool res = true;
    while (j < i)
    {
        res = res & (s[j] == r[j]);
        j++;
    }

    bool esVerdadero = primeraParte && res;

    cout << "El invariante es = " << esVerdadero << endl;
}

vector<int> copiarSecuencia(vector<int> s)
{
    vector<int> r;
    int i = 0;
    while (i < s.size())
    {
        invariante(s, r, i);
        r.push_back(s[i]);
        i++;
        invariante(s, r, i);
    }
    return r;
}