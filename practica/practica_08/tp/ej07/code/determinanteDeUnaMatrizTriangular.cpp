int determinanteDeUnaMatrizTriangular(vector<vector<int>> m){   //n = |m|
    int i = 0;                                                  //1
    int determinante = 1;                                       //1

    while (i < m.size())                                        //1 + n(1
    {
        determinante = determinante * m[i][i]                   //4
    }
    
    return determinante;
}                                                               //) = 3 + 5n