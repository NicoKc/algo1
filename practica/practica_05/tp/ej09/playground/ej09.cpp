#include <vector>
#include <iostream>

using namespace std;

void suma(vector<int> s)
{
    int i = s.size() - 1;
    int suma = 0;
    while (i >= (s.size() / 2))
    {
        suma = suma + s[s.size() - 1 - i];
        i = i - 1;
    }

    cout << "suma= " << suma << endl;
}

void qc(vector<int> s)
{
    int j = 0;
    int suma = 0;
    while (j <= (s.size() / 2) - 1)
    {
        suma = suma + s[j];
        j = j + 1;
    }

    cout << "qc= " << suma << endl;
}

int main()
{
    vector<int> s{1, 1, 1, 43, 99, 4};

    suma(s);
    qc(s);

    return 0;
}