#include <iostream>
#include <fstream>

void leerEntradaTxt()
{
    int a = 0;
    float f = 0;

    std::ifstream fin;
    fin.open("entrada.txt");
    fin >> a;
    fin >> f;
    fin.close();
    std::cout << a << " " << f << std::endl;
}

int main()
{
    leerEntradaTxt();

    return 0;
}