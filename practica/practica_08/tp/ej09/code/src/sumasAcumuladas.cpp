#include "sumasAcumuladas.h"

int sumHasta(vector<vector<int>> &mat, int I, int J, int N) {
    int res = 0;                                                //1
    int lim;                                                    //1
    for (int i = 0; i <= I; i++) {                              //2 + (I+1) *(
        if (i == I) {                                           //3
            lim = J;
        } else {
            lim = N - 1;
        }
        for (int j = 0; j <= lim; j++) {                        //2 + N*(2
            res += mat[i][j];                                   //4
        }                                                       //)
    }
    return res;
} // 4 + (I+1)(5+ 6N)

void sumasAcumuladas(vector<vector<int>> &mat, int N) { //N
    for (int i = N - 1; i >= 0; i--) {                  //2 + N*(2
        for (int j = N - 1; j >= 0; j--) {              //2 + N*(2
            mat[i][j] = sumHasta(mat, i, j, N);     //3 + t(sumaHasta)
        }
    }
} // O(n^3)
