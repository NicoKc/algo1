#include "sumasAcumuladasPro.h"

int elAnterior(vector<vector<int>> mat, int i, int j, int N) {
    int result = 0;

    if (i != 0 || j != 0) {
        if (j == 0) {
            result = mat[i - 1][N - 1];
        } else {
            result = mat[i][j - 1];
        }
    }

    return result;
}

void sumasAcumuladasPro(vector<vector<int>> &mat, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = mat[i][j] + elAnterior(mat, i, j, N);
        }
    }
}