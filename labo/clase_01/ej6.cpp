#include <iostream>

using namespace std;

int sumarImparesAnterioresRecursivo(int n)
{
    if (n == 1)
        return 1;
    else if (n % 2 == 0)
        return 0 + sumarImparesAnterioresRecursivo(n - 1);
    else
        return n + sumarImparesAnterioresRecursivo(n - 2);
}

int sumarImparesAnterioresFor(int n)
{
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            result = result + i;
    }

    return result;
}

int sumaImparesWhile(int n)
{
    int result = 0;
    int i = 0;
    while (i < n)
    {
        if (i % 2 != 0)
            result = result + i;

        i++;
    }

    return result;
}

void solucionRecursiva(int n)
{
    cout << "-------Solución recursiva-------" << endl;
    cout << "El resultado es: " << sumarImparesAnterioresRecursivo(n - 1) << endl;
    cout << "--------------------------------" << endl;
}

void solucionWhile(int n)
{
    cout << "-------Solución while-----------" << endl;
    cout << "El resultado es: " << sumaImparesWhile(n) << endl;
    cout << "--------------------------------" << endl;
}

void solucionFor(int n)
{
    cout << "-------Solución for-----------" << endl;
    cout << "El resultado es: " << sumarImparesAnterioresFor(n) << endl;
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