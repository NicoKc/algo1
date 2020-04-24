#include <iostream>
#include <fstream>

void leerNumerosTxt()
{
    int a = 0;
    float f = 0;

    std::ifstream fin;
    fin.open("numeros.txt");

    while (!fin.eof())
    {
        int a = 0;
        fin >> a;
        std::cout << a << std::endl;
    }

    fin.close();
}

int main()
{
    leerNumerosTxt();

    return 0;
}