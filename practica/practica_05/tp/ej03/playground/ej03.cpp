#include <iostream>

using namespace std;

void exponenciacion(int m, int n)
{
    int i = 0;
    int result = 1;
    while (i < n)
    {
        result = result * m;
        i = i + 1;
    }

    cout << "i=" << i << endl;
    cout << "result=" << result << endl;
}

int main()
{
    int n = 0;
    int m = 0;

    cout << "Ingrese m" << endl;
    cin >> m;
    cout << "Ingrese n" << endl;
    cin >> n;

    exponenciacion(m, n);

    return 0;
}