#ifndef L09_BUSQUEDAYORDENAMIENTO_EJERCICIO3_H
#define L09_BUSQUEDAYORDENAMIENTO_EJERCICIO3_H

#include <vector>

using namespace std;

void sort(vector<int> &s);

vector<int> concat(vector<int> &ordered, vector<int> &y);

vector<int> apareamiento(vector<int> &a, vector<int> &b);

float medianaConOrdenamiento(vector<int> &x, vector<int> &y);

float medianaConApareamiento(vector<int> &x, vector<int> &y);

float medianaSinOrdenamiento(vector<int> &x, vector<int> &y);

int indiceMenor(vector<int> &s, int e);

bool busqueda_binaria(vector<int> &s, int e);

#endif //L09_BUSQUEDAYORDENAMIENTO_EJERCICIO3_H
