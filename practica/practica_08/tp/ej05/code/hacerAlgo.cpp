vector<int> hacerAlgo(vector<int> &v)               //n = |v|
{
    vector<int> res;                                //1
    for (int i = 0; i < 100; i++)                   //2+100*(2
    {
        res.push_back(contarApariciones(v, i + 1))  //1+ t(contarApariciones)
    }                                               //)

    return res;
}

int contarApariciones(vector<int> &v, int elem)     //n = |v|
{
    int cantAp = 0;                                 // 1
    for (int i = 0; i < v.size(); i++)              // 2 + n*(2
    {
        if (v[i] == elem)                           //2
        {
            cantAp++                                //2
        }
    }                                               //) = 3 + 6n
}