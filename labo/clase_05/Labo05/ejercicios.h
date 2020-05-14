#ifndef EJERCICIOS_INCLUDED_H
#define EJERCICIOS_INCLUDED_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool estaOrdenado(vector<int> v);
bool pertenece(int elemento, vector<int> v);
long fibonacci(int k);
int sumaDoble(vector<int> v);
int todosImpares(vector<int> v);
int sumaPrimos(int n);
bool existePico(vector<int> v);
int indiceMinimoSubsec(vector<int> v, int i, int j);
int sumatoria(vector<int> v);
void ordenar(vector<int>& v);


string mostrarVector(vector<int> v);

#endif // EJERCICIOS_INCLUDED_H


