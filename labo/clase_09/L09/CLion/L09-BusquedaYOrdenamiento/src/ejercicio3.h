#ifndef L09_BUSQUEDAYORDENAMIENTO_EJERCICIO3_H
#define L09_BUSQUEDAYORDENAMIENTO_EJERCICIO3_H

#include <vector>

using namespace std;

void sort(vector<int> &s);
vector<int> concat(vector<int> &ordered, vector<int> &y);
vector<int> mergeConcat(vector<int> &ordered, vector<int> &s);
float medianaConOrdenamiento(vector<int> &x, vector<int> &y);
float medianaConApareamiento(vector<int> &x, vector<int> &y);
float medianaSinOrdenamiento(vector<int> &x, vector<int> &y);

#endif //L09_BUSQUEDAYORDENAMIENTO_EJERCICIO3_H
