#include <iostream>
#include <vector>
#include <utility>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

bool divide(vector<int> v, int n);

int maximo(vector<int> v);

bool pertenece(int elem, vector<int> v);

void mostrarVector(vector<int> v);

void sinImpares(vector<int>& v);

vector<int> limpiarDuplicados(vector<int> v);

vector<int> rotar(vector<int> v, int k);

vector<int> reverso(vector<int> v);
vector<int> reversoRec(vector<int> v);

vector<int> factoresPrimos(int n);

bool estaOrdenado(vector<int> v);

void negar(vector<bool>& booleanos);

vector<pair<int, int> > cantidadApariciones(vector<int> v);

void palindromos(string rutaArchivoIn, string rutaArchivoOut);

void promedios(string rutaArchivoIn1, string rutaArchivoIn2, string rutaArchivoOut);

void cantidadApariciones(string rutaArchivoIn, string rutaArchivoOut);

void estadisticas(string rutaArchivo);

void interseccion();