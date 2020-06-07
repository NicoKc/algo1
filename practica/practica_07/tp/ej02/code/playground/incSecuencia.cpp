#include <iostream>
#include "incSecuencia.h"

using namespace std;

void invariante(vector<int> s, vector<int> r, int i)
{
    bool primeraParte = 0 <= i & i <= s.size();

    int j = 0;
    bool res = true;
    while (j < i)
    {
        res = res & (s[j] + 1 == r[j]);
        j++;
    }

    bool esVerdadero = primeraParte & res;

    cout << "El invariante es = " << esVerdadero << endl;
}

void incSecuencia(vector<int> &a)
{
    vector<int> s = a;
    int i = 0;
    while (i < a.size())
    {
        invariante(s, a, i);
        a[i] = a[i] + 1;
        i++;
        invariante(s, a, i);
    }
}