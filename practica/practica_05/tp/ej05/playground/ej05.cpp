#include <vector>
#include <iostream>

using namespace std;

int sumatoria(vector<int> s, int desde, int hasta)
{
    int i = desde;
    int acumulador = 0;
    while (i <= hasta)
    {
        if ((i % 2) == 1)
        {
            acumulador = acumulador + s[i];
        }
        i = i + 1;
    }

    return acumulador;
}

void invariante(vector<int> s, int j, int result, string mensaje)
{
    int sum = sumatoria(s, 0, j - 1);
    bool isTrue = ((0 <= j) & (j <= s.size())) && (result == sum);

    // cout << "j=" << j << "; result=" << result << "; sum=" << sum << endl;

    cout << "[" << mensaje << "]"
         << "{j=" << j << "}"
         << "El invariante es: " << isTrue << endl;
}

void sumaImpares(vector<int> s)
{
    int j = 1;
    int result = 0;
    invariante(s, j, result, "Entrada al metodo");
    while (j < s.size())
    {
        invariante(s, j, result, "Inicio del ciclo");
        if ((j % 2) == 1)
        {
            result = result + s[j];
        }
        j = j + 2;
        invariante(s, j, result, "Salida del ciclo");
    }

    invariante(s, j, result, "Salida del metodo");
}

int main()
{
    vector<int> s{2, 1, 9, 30, 25, 2, 4};

    sumaImpares(s);

    return 0;
}