#include <iostream>
#include <vector>

using namespace std;

int mesetaMasLarga(vector<int> &v)
{
    int i = 0;         //1
    int maxMeseta = 0; //1
    int meseta;        //1

    while (i < v.size()) //1 + n*(
    {
        int j = i + 1;                       //1
        while (j < v.size() && v[i] == v[j]) //6 + m*(6
        {
            j++;        //2
        }               //)
        meseta = j - i; //2
        i = j;          //1

        if (meseta > maxMeseta) //1
        {
            maxMeseta = meseta; //1
        }
    }
    return maxMeseta; //)
}

int mesetaMasLargaEnUnSoloCiclo(vector<int> &v)
{
    int i = 0;
    int maxMeseta = 0;
    int mesetaActual = 0;
    int valorPrevio = 0;

    while (i < v.size())
    {
        if (v[i] == valorPrevio)
        {
            mesetaActual++;
        }
        else
        {
            if (mesetaActual > maxMeseta)
            {
                maxMeseta = mesetaActual;
            }
            mesetaActual = 1;
            valorPrevio = v[i];
        }
        i++;
    }
    return maxMeseta;
}

int main()
{
    vector<int> v{1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 3, 3, 5, 6, 6, 6, 6, 7, 8};
    int result = mesetaMasLarga(v);
    cout << result << endl;
    cout << (result == mesetaMasLargaEnUnSoloCiclo(v)) << endl;
    return 0;
}