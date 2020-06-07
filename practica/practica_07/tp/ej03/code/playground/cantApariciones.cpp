#include <iostream>
#include "cantApariciones.h"

using namespace std;

vector<int> subseq(vector<int> s, int i, int z)
{
    vector<int> r(0);

    int j = 0;
    while (j < s.size())
    {
        r.push_back(s[j]);
        j++;
    }

    return r;
}

int cantAparicionesWithoutInvariant(vector<int> s, int e)
{
    int r = 0;
    for (int i = 0; i<s.size(); i++){
        if(s[i] == e)
            r++;
    }
    return r;
}

void invariante(vector<int> s, int i, int cant, int element)
{
    bool primeraParte = 0 <= i & i <= s.size();
    vector<int> subSeq = subseq(s, 0, i);
    int j = 0;
    int apariciones = cantAparicionesWithoutInvariant(subSeq, element);

    bool esVerdadero = primeraParte && (apariciones == cant);

    cout << "El invariante es = " << esVerdadero << endl;
}

int cantApariciones(vector<int> s, int e)
{
    int r = 0;
    for (int i = 0; i<s.size(); i++){
        invariante(s, i, r, e);
        if(s[i] == e)
        {
            r++;
        }
        invariante(s, i, r, e);
    }
    return r;
}
