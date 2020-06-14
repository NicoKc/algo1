#include <iostream>
#include "multiplicar.h"


vector<vector<int>> multiplicar(vector<vector<int>> m1, vector<vector<int>> m2) {   //|m1|=m*n, |m2|=n*l
    vector<vector<int >> result(0);                             //1

    int i = 0;                                                      //1
    while (i < m1.size()) {                                         //2 + m *(2
        vector<int> aux(0);                                     //1

        int j = 0;                                                  //1
        while (j < m2[0].size()) {                                  //3 + l *(3
            int acumulado = 0;                                      //1
            int k = 0;                                              //1
            while (k < m1[0].size()) {                              //3 + n *(3
                acumulado = acumulado + (m1[i][k]) * (m2[k][j]);    //7
                k++;                                                //1)
            }
            aux.push_back(acumulado);                               //1
            j++;                                                    //1)
        }

        result.push_back(aux);                                      //1
        i++;                                                        //1)
    }

    return result;
} // = 4 + m *(9 + l *(10 + 11n) = O(m*l*n) sino es O(n^3)