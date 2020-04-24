#include <iostream>
#include <fstream>

void escribirArchivo(int a,
                     int b,
                     float f,
                     float g)
{
    std::ofstream fout;
    fout.open("salida.txt");
    fout << a << "," << b << std::endl;
    fout << f << "," << g << std::endl;
    fout.close();
}

int main()
{
    int primerEntero = 1;
    int segundoEntero = 2;
    float primerReal = 3;
    float segundoReal = 4;

    escribirArchivo(primerEntero,
        segundoEntero,
        primerReal,
        segundoReal);

    return 0;
}