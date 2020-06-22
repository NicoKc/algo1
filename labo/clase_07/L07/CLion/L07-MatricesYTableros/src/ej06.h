#ifndef L07_MATRICESYTABLEROS_EJ06_H
#define L07_MATRICESYTABLEROS_EJ06_H

#include "definiciones.h"
#include <vector>
#include <tuple>

using namespace std;

tuple<tuple<int, int>, vector<tuple<int, int, int>>> aTriplas(matriz m);

matriz aMatriz(vector<tuple<int, int, int>> m, tuple<int, int> dim);

void transponerDispersa(vector<tuple<int, int, int>> &m);

#endif //L07_MATRICESYTABLEROS_EJ06_H
