#include <iostream>
#include <fstream>

void generarSuma()
{
    std::ofstream fout;
    std::ifstream fin1;
    std::ifstream fin2;

    fout.open("suma.txt");
    fin1.open("numeros1.txt");
    fin2.open("numeros2.txt");

    while (!fin1.eof())
    {
        int a = 0;
        int b = 0;
        fin1 >> a;
        fin2 >> b;
        fout << a + b << " ";
    }

    fin1.close();
    fin2.close();
    fout.close();
}

int main()
{
    generarSuma();
    return 0;
}