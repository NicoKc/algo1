#include <iostream>
#include <cmath>
#include <math.h>

bool esPrimo(int numero)
{
    if (numero <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(numero); i++)
    {
        if (numero % i == 0 and i != numero)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int numero = 0;

    std::cout << "Ingrese un número" << std::endl;
    std::cin >> numero;
    if (esPrimo(numero))
    {
        std ::cout << "El número ingresado es primo" << std ::endl;
    }
    else
    {
        std ::cout << "El número ingresado no es primo" << std ::endl;
    }
    return 0;
}