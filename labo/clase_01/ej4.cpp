#include <iostream>

using namespace std;

bool esPrimo(int n)
{
    for (int i = n - 1; i >= 2; i--)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n = 0;
    int segundoValor = 0;

    cout << "Ingrese un valor: ";
    cin >> n;

    if (esPrimo(n))
        cout << "Es primo" << endl;
    else
        cout << "No es primo" << endl;

    return 0;
}