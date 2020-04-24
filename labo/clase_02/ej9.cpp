#include <iostream>
#include <fstream>
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
            return false;
    }

    return true;
}

void primosGemelos(int n, int &res1, int &res2)
{
    int cantidadEncontrados = 0;
    int i = 2;

    std::ofstream fout;
    fout.open("primosGemelos.txt");

    while (cantidadEncontrados < n)
    {
        if (esPrimo(i))
        {
            if (esPrimo(i + 2))
            {
                res1 = i;
                res2 = i + 2;
                fout << "(" << res1 << "," << res2 << ") ";
                cantidadEncontrados++;
            }
        }

        i++;
    }

    fout.close();
}

int main()
{
    int numero = 0;
    int res1 = 0;
    int res2 = 0;
    std::cout << "Ingrese un número" << std::endl;
    std::cin >> numero;

    primosGemelos(numero, res1, res2);

    return 0;
}
