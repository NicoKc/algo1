#include <iostream>

using namespace std;

int f(int x, int y)
{
    if (x > y)
    {
        return x + y;
    }
    else
    {
        return x * y;
    }
}

int main()
{
    int primerValor = 0;
    int segundoValor = 0;

    cout << "Ingrese primer valor: ";
    cin >> primerValor;
    cout << "Ingrese segundo valor: ";
    cin >> segundoValor;

    cout << "El resultado es: " << f(primerValor, segundoValor) << endl;

    return 0;
}