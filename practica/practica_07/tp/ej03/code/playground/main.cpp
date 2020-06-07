#include <iostream>
#include "cantApariciones.h"

using namespace std;

void imprimir(vector<int> v)
{
    int i = 0;
    while (i < v.size())
    {
        cout << "i= " << i << "; ";
        cout << "v= " << v[i];
        cout << endl;
        i++;
    }
}

int main()
{
    vector<int> v{1, 3, 2, 3, 4, 5};
    int cantidad = cantApariciones(v, 3);
    imprimir(vector<int>{cantidad});
}
