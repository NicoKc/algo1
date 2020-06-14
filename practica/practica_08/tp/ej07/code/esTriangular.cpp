bool esMatrizCuadrada(vector<vector<int>> m)    //|m| = n
{
    bool esCuadrada = true;                     //1
    int i;                                      //1

    while (i < m.size())                        //1 + n ( 1
    {
        esCuadrada &= m[i].size() == m.size();  //3
        i++;                                    //2
    }

    return esCuadrada;
}                                               //= 3 + 6n

bool laTriangularSuperiorEsNula(m)
{
    bool esNula = true;                         //1
    int i = 0;                                  //1

    while (i < m.size())                        //1 + n(1
    {
        int j = i;                              //1
        while (j < m[i].size())                 //2 + n/2(2
        {
            esNula &= m[i][j] == 0;             //4
            j++;                                //2
        }                                       //)
        i++;                                    //2
    }                                           //) = 3 + n(6 + 4n) 

    return esNula;
}

bool laTriangularInferiorEsNula(m)
{
    bool esNula = true;
    int i = 0;

    while (i < m.size())
    {
        int j = m.size();
        while (j >= i)
        {
            esNula &= m[i][j] == 0 j--;
        }
        i++;
    }

    return esNula;
}

bool esTriangular(vector<vector<int>> m)
{
    bool result = esCuadrada(m) &&
                  (laTriangularSuperiorEsNula(m) || laTriangularInferiorEsNula(m));

    return result;
}