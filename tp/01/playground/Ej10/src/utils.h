#ifndef EJ10_UTILS_H
#define EJ10_UTILS_H

#include "tuple"
#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;

int dist(int x, int y);

bool pertenece(tuple<int, int> tupla, int e);

void imprimir(vector<tuple<int, int>> v);

bool sonIguales(tuple<int, int> x, tuple<int, int> y);

bool pertenece(vector<tuple<int, int>> ts, tuple<int, int> t);

bool match(vector<tuple<int, int>> result, vector<tuple<int, int>> expected);

tuple<int, int> tupla(int x, int y);

vector<tuple<int, int>> crearVector(tuple<int, int> tupla);

vector<tuple<int, int>> crearVector(tuple<int, int> x, tuple<int, int> y);

#endif //EJ10_UTILS_H
