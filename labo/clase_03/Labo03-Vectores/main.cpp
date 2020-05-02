#include <iostream>
#include "ejercicios.h"

using namespace std;

vector<int> obtenerVectorConDuplicados()
{
    vector<int> conDuplicados(4, 1);
    conDuplicados.push_back(2);
    conDuplicados.push_back(2);
    conDuplicados.push_back(2);
    conDuplicados.push_back(2);
    conDuplicados.push_back(3);
    conDuplicados.push_back(3);
    conDuplicados.push_back(3);

    return conDuplicados;
}

vector<int> obtenerVectorConNegativos()
{
    vector<int> vectorConNegativos;
    vectorConNegativos.push_back(-20);
    vectorConNegativos.push_back(30);
    vectorConNegativos.push_back(40);

    return vectorConNegativos;
}

vector<int> obtenerVectorConUnicoValor()
{
    vector<int> v2;
    v2.push_back(3);

    return v2;
}

vector<int> obtenerVectorOrdenado()
{
    vector<int> ordenado;

    ordenado.push_back(1);
    ordenado.push_back(2);
    ordenado.push_back(3);
    ordenado.push_back(4);
    ordenado.push_back(5);
    ordenado.push_back(6);
    ordenado.push_back(7);
    ordenado.push_back(8);

    return ordenado;
}

string getPathIn(string file)
{
    return "archivos/" + file + ".txt";
}

string getPathOut(string file)
{
    return "result/" + file + ".txt";
}

void endOfTest()
{
    cout << endl;
}

vector<string> obtenerValoresDeArchivo(string nombreDeArchivo)
{
    vector<string> valores;
    ifstream fin;

    fin.open(nombreDeArchivo);
    while (!fin.eof())
    {
        string a = "";
        fin >> a;
        valores.push_back(a);
    }
    fin.close();

    return valores;
}

void mostrarArchivo(string fileName)
{
    vector<string> valores = obtenerValoresDeArchivo(fileName);
    mostrarVector(valores);
}

void palindromos()
{
    cout << "Palindromos" << endl;
    string fileName = "palindromos";
    string outputPath = getPathOut(fileName);
    palindromos(getPathIn(fileName), outputPath);
    mostrarArchivo(outputPath);
    endOfTest();
}

void promedios()
{
    cout << "Promedios" << endl;
    string outputPath = getPathOut("promedio");
    promedios(getPathIn("promedios1"),
              getPathIn("promedios2"),
              outputPath);
    mostrarArchivo(outputPath);
    endOfTest();
}

void estadisticas()
{
    cout << "Estadisticas" << endl;
    estadisticas(getPathIn("estadisticas"));
    endOfTest();
}

void interseccionLocal()
{
    cout << "Interseccion" << endl;
    interseccion();
    endOfTest();
}

void divide()
{
    cout << "Divide" << endl;
    vector<int> v = obtenerVectorConNegativos();
    vector<int> v2 = obtenerVectorConUnicoValor();

    cout << divide(v, 10) << endl;
    cout << divide(v2, 10) << endl;

    endOfTest();
}

void maximo()
{
    vector<int> v = obtenerVectorConNegativos();
    vector<int> v2 = obtenerVectorConUnicoValor();

    cout << "Maximo" << endl;
    cout << maximo(v) << endl;
    cout << maximo(v2) << endl;
    endOfTest();
}

void pertenece()
{
    vector<int> v = obtenerVectorConNegativos();
    vector<int> v2 = obtenerVectorConUnicoValor();

    cout << "Pertence" << endl;
    cout << pertenece(30, v) << endl;
    cout << pertenece(2, v2) << endl;
    endOfTest();
}

void mostrarVector()
{
    vector<int> v = obtenerVectorConNegativos();
    vector<int> v2 = obtenerVectorConUnicoValor();

    cout << "MostrarVector" << endl;
    mostrarVector(v);
    mostrarVector(v2);
    endOfTest();
}

void sinImpares()
{
    vector<int> v = obtenerVectorConNegativos();
    vector<int> v2 = obtenerVectorConUnicoValor();

    cout << "SinImpares" << endl;
    sinImpares(v);
    sinImpares(v2);
    endOfTest();
}

void limpiarDuplicados()
{
    vector<int> conDuplicados = obtenerVectorConDuplicados();
    vector<int> v = obtenerVectorConNegativos();

    cout << "LimpiarDuplicados" << endl;
    mostrarVector(limpiarDuplicados(v));
    mostrarVector(limpiarDuplicados(conDuplicados));
    endOfTest();
}

void rotar()
{
    vector<int> v = obtenerVectorConNegativos();

    cout << "Rotar" << endl;
    mostrarVector(rotar(v, 2));
    endOfTest();
}

void reverso()
{
    vector<int> ordernado = obtenerVectorOrdenado();

    cout << "Reverso" << endl;
    mostrarVector(reverso(ordernado));
    endOfTest();
}

void factoresPrimos()
{
    vector<int> v = obtenerVectorConNegativos();

    cout << "FactoresPrimos" << endl;
    mostrarVector(factoresPrimos(v[0]));
    endOfTest();
}

void estaOrdenado()
{
    vector<int> v = obtenerVectorConNegativos();

    cout << "EstaOrdenado" << endl;
    cout << estaOrdenado(v) << endl;
    endOfTest();
}

void negar()
{
    vector<bool> booleans;
    booleans.push_back(true);
    booleans.push_back(false);
    cout << "Negar" << endl;
    negar(booleans);
    mostrarVector(booleans);
    endOfTest();
}

void cantidadDeApariciones()
{
    vector<int> conDuplicados = obtenerVectorConDuplicados();

    cout << "CantidadApariciones" << endl;
    mostrarVector(cantidadApariciones(conDuplicados));
    endOfTest();
}

void cantidadDeAparicionesEnArchivo()
{
    cout << "CantidadDeApariciones" << endl;
    string outputFile = getPathOut("apariciones");
    cantidadApariciones(getPathIn("apariciones"),
                        outputFile);
    mostrarArchivo(outputFile);
    endOfTest();
}

int main()
{
    divide();
    maximo();
    pertenece();
    mostrarVector();
    sinImpares();
    limpiarDuplicados();
    rotar();
    reverso();
    factoresPrimos();
    estaOrdenado();
    negar();
    cantidadDeApariciones();
    palindromos();
    promedios();
    cantidadDeAparicionesEnArchivo();
    estadisticas();
    interseccionLocal();

    return 0;
}