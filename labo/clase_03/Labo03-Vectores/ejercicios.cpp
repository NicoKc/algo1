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

void mostrarVector(vector<string> v)
{
    cout << "[";

    for (int i = 0; i < v.size(); i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << v[i];
    }

    cout << "]" << endl;
}

void mostrarVector(vector<int> v)
{
    cout << "[";

    for (int i = 0; i < v.size(); i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << v[i];
    }

    cout << "]" << endl;
}

void mostrarVector(vector<bool> v)
{
    cout << "[";

    for (int i = 0; i < v.size(); i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << v[i];
    }

    cout << "]" << endl;
}

void mostrarVector(vector<pair<int, int>> v)
{
    cout << "[";

    for (int i = 0; i < v.size(); i++)
    {
        if (i != 0)
        {
            cout << ", ";
        }
        cout << "(" << v[i].first << ", " << v[i].second << ")";
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

    for (int i = 0; i < v.size(); i++)
    {
        res = res + v[(v.size() - 1) - i];
    }

    return res;
}

vector<int> reverso(vector<int> v)
{
    vector<int> res;

    for (int i = 0; i < v.size(); i++)
    {
        res.push_back(v[(v.size() - 1) - i]);
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

    return true;
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
    ifstream fin;
    ofstream fout;

    fin.open(rutaArchivoIn);
    fout.open(rutaArchivoOut);
    bool isFirst = true;

    while (!fin.eof())
    {
        string palabra = "";
        fin >> palabra;
        if (esPalindromo(palabra))
        {
            if (isFirst)
            {
                isFirst = false;
            }
            else
            {
                fout << " ";
            }

            fout << palabra;
        }
    }

    fin.close();
    fout.close();
}

void promedios(string rutaArchivoIn1, string rutaArchivoIn2, string rutaArchivoOut)
{
    ifstream fin1;
    ifstream fin2;
    ofstream fout;

    fin1.open(rutaArchivoIn1);
    fin2.open(rutaArchivoIn2);
    fout.open(rutaArchivoOut);
    bool isFirst = true;

    while (!fin1.eof())
    {
        if (isFirst)
        {
            isFirst = false;
        }
        else
        {
            fout << " ";
        }

        string nota1 = "";
        string nota2 = "";
        fin1 >> nota1;
        fin2 >> nota2;
        int x = stoi(nota1);
        int y = stoi(nota2);
        fout << ((x + y) / 2);
    }

    fin1.close();
    fin2.close();
    fout.close();
}

void cantidadApariciones(string rutaArchivoIn, string rutaArchivoOut)
{
    ifstream fin;
    ofstream fout;
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
        fout << pair.first << " " << pair.second;

        if (i != infoDeRepetidos.size() - 1)
        {
            fout << endl;
        }
    }

    fin.close();
    fout.close();
}

void estadisticas(string rutaArchivo)
{
    ifstream fin;
    vector<pair<int, int>> infoDeRepetidos;

    fin.open(rutaArchivo);

    while (!fin.eof())
    {
        string num;
        fin >> num;
        sumOrAdd(infoDeRepetidos, num.size());
    }

    string title = "Palabras de longitud";
    string dosPuntosTab = ": \t";
    string espaciosTab = "\t";
    for (int i = 0; i < infoDeRepetidos.size(); i++)
    {
        pair<int, int> pair = infoDeRepetidos[i];
        cout << title << espaciosTab << pair.first << dosPuntosTab
             << pair.second << endl;
    }

    fin.close();
}

vector<int> obtenerEnterosDeArchivo(string rutaArchivoIn)
{
    ifstream fin;
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
        if (i != 0)
        {
            cout << " ";
        }
        cout << interseccion[i];
    }
    cout << endl;
}
