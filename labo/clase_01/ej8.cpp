#include <iostream>

using namespace std;

int combinatorioRecursivo(int n, int k)
{
    if (n == k)
    {
        return 1;
    }
    if (k <= 1)
    {
        return n;
    }

    return combinatorioRecursivo(n - 1, k) + combinatorioRecursivo(n - 1, k - 1);
}

int factorialFor(int n)
{
    int result = 1;
    for (int i = n; i >= 1; i--)
    {
        result = i * result;
    }

    return result;
}

int combinatorioFor(int n, int k)
{
    return factorialFor(n) / (factorialFor(k) * factorialFor(n - k));
}

int factorialWhile(int n)
{
    int i = n;
    int result = 1;
    while (i >= 1)
    {
        result = i * result;
        i--;
    }
    return result;
}

int combinatorioWhile(int n, int k)
{
    return factorialWhile(n) / (factorialWhile(k) * factorialWhile(n - k));
}

void solucionRecursiva(int n, int k)
{
    cout << "-------Solución recursiva-------" << endl;
    cout << "El resultado es: " << combinatorioRecursivo(n, k) << endl;
    cout << "--------------------------------" << endl;
}

void solucionWhile(int n, int k)
{
    cout << "-------Solución while-----------" << endl;
    cout << "El resultado es: " << combinatorioWhile(n, k) << endl;
    cout << "--------------------------------" << endl;
}

void solucionFor(int n, int k)
{
    cout << "-------Solución for-----------" << endl;
    cout << "El resultado es: " << combinatorioFor(n, k) << endl;
    cout << "--------------------------------" << endl;
}

int main()
{
    int n = 0;
    int k = 0;
    cout << "Ingrese valor: ";
    cin >> n;
    cout << endl;

    cout << "Ingrese valor: ";
    cin >> k;
    cout << endl;

    solucionRecursiva(n, k);

    solucionWhile(n, k);

    solucionFor(n, k);

    return 0;
}