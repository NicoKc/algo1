#include "ejercicios.h"

bool divide(vector<int> v, int n)
{
    int size = v.size();

    if (size == 0)
    {
        return false;
    }

    for (int i = 0; i < size; i++)
    {
        if (v[i] & n != 0)
            return false;
    }

    return true;
}

int maximo(vector<int> v)
{
    int size = v.size();
    int max = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }

    return max;
}

bool pertenece(int elem, vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (elem == v[i])
        {
            return true;
        }
    }

    return false;
}

void mostrarVector(vector<int> v)
{
    cout << "[";

    for (int i = 0; i < v.size(); i++)
    {
        cout << ", " << v[i];
    }

    cout << "]" << endl;
}

void sinImpares(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 1)
        {
            v[i] = 0;
        }
    }
}

vector<int> limpiarDuplicados(vector<int> v)
{
    vector<int> res;

    for (int i = 0; i < v.size(); i++)
    {
        if (!pertenece(v[i], res))
            res.push_back(v[i]);
    }

    return res;
}

vector<int> rotar(vector<int> v, int k)
{
    vector<int> res;

    for (int i = k; i < v.size(); i++)
    {
        res.push_back(v[i]);
    }

    for (int i = 0; i < k; i++)
    {
        res.push_back(v[i]);
    }

    return res;
}

string reverso(string v)
{
    string res;

    for (size_t i = 0; i < v.size(); i++)
    {
        res[i] = v[(v.size() - 1) - i];
    }

    return res;
}

vector<int> reverso(vector<int> v)
{
    vector<int> res;

    for (size_t i = 0; i < v.size(); i++)
    {
        res[i] = v[(v.size() - 1) - i];
    }

    return res;
}

vector<int> reversoRec(vector<int> v)
{
    vector<int> res;
    // if (v.size() == 0)
    // {
    //     return res;
    // }

    // res.push_back(v[v.size() - 1]);
    // v.pop_back();
    return res;
}

bool esPrimo(int n)
{
    for (int i = n - 1; i >= 2; i--)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

vector<int> factoresPrimos(int n)
{
    vector<int> res;
    for (int i = 2; i < n; i++)
    {
        if ((n & i == 0) && (esPrimo(i)))
        {
            res.push_back(i);
        }
    }

    return res;
}

bool estaOrdenado(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }

    return false;
}

void negar(vector<bool> &booleanos)
{
    for (int i = 0; i < booleanos.size() - 1; i++)
    {
        booleanos[i] = !(booleanos[i]);
    }
}

void sumOrAdd(vector<pair<int, int>> &v, int n)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first == n)
        {
            v[i].second++;
            return;
        }
    }

    pair<int, int> newPair(n, 1);
    v.push_back(newPair);
}

vector<pair<int, int>> cantidadApariciones(vector<int> v)
{
    vector<pair<int, int>> res;

    for (int i = 0; i < v.size(); i++)
    {
        sumOrAdd(res, v[i]);
    }

    return res;
}

bool esPalindromo(string palabra)
{
    return (palabra == reverso(palabra));
}

void palindromos(string rutaArchivoIn, string rutaArchivoOut)
{
    std::ifstream fin;
    std::ofstream fout;

    fin.open(rutaArchivoIn);
    fout.open(rutaArchivoOut);

    while (!fin.eof())
    {
        string palabra = "";
        if (esPalindromo(palabra))
            fout << palabra;
    }

    fin.close();
    fout.close();
}

void promedios(string rutaArchivoIn1, string rutaArchivoIn2, string rutaArchivoOut)
{
    std::ifstream fin1;
    std::ifstream fin2;
    std::ofstream fout;

    fin1.open(rutaArchivoIn1);
    fin2.open(rutaArchivoIn2);
    fout.open(rutaArchivoOut);

    while (!fin1.eof())
    {
        int nota1 = 0;
        int nota2 = 0;
        fin1 >> nota1;
        fin2 >> nota2;
        fout << (nota1 + nota2) / 2;
    }

    fin1.close();
    fin2.close();
    fout.close();
}

void cantidadApariciones(string rutaArchivoIn, string rutaArchivoOut)
{
    std::ifstream fin;
    std::ofstream fout;
    vector<pair<int, int>> infoDeRepetidos;

    fin.open(rutaArchivoIn);

    while (!fin.eof())
    {
        int num;
        fin >> num;
        sumOrAdd(infoDeRepetidos, num);
    }

    fout.open(rutaArchivoOut);
    for (int i = 0; i < infoDeRepetidos.size(); i++)
    {
        pair<int, int> pair = infoDeRepetidos[i];
        fout << pair.first << " " << pair.second << std::endl;
    }

    fin.close();
    fout.close();
}

void estadisticas(string rutaArchivo)
{
    std::ifstream fin;
    vector<pair<int, int>> infoDeRepetidos;

    fin.open(rutaArchivo);

    while (!fin.eof())
    {
        string num;
        fin >> num;
        sumOrAdd(infoDeRepetidos, num.size());
    }

    string title = "Palabras de longitud";
    string conector = ": ";
    for (int i = 0; i < infoDeRepetidos.size(); i++)
    {
        pair<int, int> pair = infoDeRepetidos[i];
        std::cout << title << pair.first << conector << pair.second << std::endl;
    }

    fin.close();
}

vector<int> obtenerEnterosDeArchivo(string rutaArchivoIn)
{
    std::ifstream fin;
    fin.open(rutaArchivoIn);
    vector<int> res;

    while (!fin.eof())
    {
        int entero = 0;
        fin >> entero;
        res.push_back(entero);
    }

    fin.close();

    return res;
}

vector<int> obtenerInterseccion(vector<int> x, vector<int> y)
{
    vector<int> resultado;
    vector<int> intsToSearch = x;
    vector<int> intsToSearchIn = y;

    if (x.size() > y.size())
    {
        intsToSearch = y;
        intsToSearchIn = x;
    }

    for (int i = 0; i < intsToSearch.size(); i++)
    {
        if (pertenece(intsToSearch[i], intsToSearchIn))
        {
            resultado.push_back(intsToSearch[i]);
        }
    }

    return resultado;
}

void interseccion()
{
    string rutaArchivoIn1 = "";
    string rutaArchivoIn2 = "";

    cout << "Ingresar primera ruta de archivo" << endl;
    cin >> rutaArchivoIn1;
    cout << "Ingresar segunda ruta de archivo" << endl;
    cin >> rutaArchivoIn2;

    vector<int> firstInts = obtenerEnterosDeArchivo(rutaArchivoIn1);
    vector<int> secondInts = obtenerEnterosDeArchivo(rutaArchivoIn2);

    firstInts = limpiarDuplicados(firstInts);
    secondInts = limpiarDuplicados(secondInts);

    vector<int> interseccion = obtenerInterseccion(firstInts, secondInts);

    for (int i = 0; i < interseccion.size(); i++)
    {
        cout << " " << interseccion[i];
    }
}
