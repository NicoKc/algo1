#include <iostream>
#include <fstream>

void collatz(int n, int &cantPasos)
{
    int numero = n;

    std::ofstream fout;
    fout.open("collatz.txt");
    fout << numero << " ";

    while (numero > 1)
    {
        if (numero % 2 == 0)
        {
            numero = numero / 2;
        }
        else
        {
            numero = (numero * 3) + 1;
        }
        fout << numero << " ";
    }

    fout << "Cantidad de pasos: " << cantPasos;

    fout.close();
}

int main()
{
    int numero = 0;
    int cantPasos = 0;

    std::cout << "Ingrese un número" << std::endl;
    std::cin >> numero;

    collatz(numero, cantPasos);

    return 0;
}