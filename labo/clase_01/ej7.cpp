#include <iostream>

using namespace std;

int sumarDivisoresRecursivo(int n, int i)
{
    if (i == 1)
        return 1;
    else if (n % i == 0)
        return i + sumarDivisoresRecursivo(n, i - 1);
    else 
        return sumarDivisoresRecursivo(n, i - 1);
}

int sumarDivisoresRecursivo(int n)
{
    return sumarDivisoresRecursivo(n, n);
}

int sumarDivisoresFor(int n)
{
    int result = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            result = result + i;
    }

    return result;
}

int sumarDivisoresWhile(int n)
{
    int result = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            result = result + i;

        i++;
    }

    return result;
}

void solucionRecursiva(int n)
{
    cout << "-------Solución recursiva-------" << endl;
    cout << "El resultado es: " << sumarDivisoresRecursivo(n) << endl;
    cout << "--------------------------------" << endl;
}

void solucionWhile(int n)
{
    cout << "-------Solución while-----------" << endl;
    cout << "El resultado es: " << sumarDivisoresWhile(n) << endl;
    cout << "--------------------------------" << endl;
}

void solucionFor(int n)
{
    cout << "-------Solución for-----------" << endl;
    cout << "El resultado es: " << sumarDivisoresFor(n) << endl;
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