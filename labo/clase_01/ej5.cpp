#include <iostream>

using namespace std;

int fibonacciRecursivo(int n)
{
    switch (n)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    default:
        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
    }
}

void solucionRecursiva(int n)
{
    cout << "-------Solución recursiva-------" << endl;
    cout << "El resultado es: " << fibonacciRecursivo(n) << endl;
    cout << "--------------------------------" << endl;
}

int fibonacciWhile(int n)
{
    int result = 0;
    int unoPrevio = 1;
    int dosPrevios = 0;
    int i = 1;
    while (i < n)
    {
        result = unoPrevio + dosPrevios;
        dosPrevios = unoPrevio;
        unoPrevio = result;

        i++;
    }

    return result;
}

void solucionWhile(int n)
{
    cout << "-------Solución while-----------" << endl;
    cout << "El resultado es: " << fibonacciWhile(n) << endl;
    cout << "--------------------------------" << endl;
}

int fibonnaciFor(int n)
{
    int result = 0;
    int unoPrevio = 1;
    int dosPrevios = 0;
    for (int i = 1; i < n; i++)
    {
        result = unoPrevio + dosPrevios;
        dosPrevios = unoPrevio;
        unoPrevio = result;
    }
    return result;
}

void solucionFor(int n)
{
    cout << "-------Solución for-----------" << endl;
    cout << "El resultado es: " << fibonnaciFor(n) << endl;
    cout << "--------------------------------" << endl;
}

int main()
{
    int n = 0;
    cout << "Ingrese valor: ";
    cin >> n;
    cout << endl;

    solucionRecursiva(n);

    solucionWhile(n);

    solucionFor(n);

    return 0;
}