#include <iostream>
#include "ejercicios.h"

using namespace std;

int main() {

    cout << "A probar se ha dicho!" << endl;
    cout << "DIVIDE" << endl;

    vector<int> v;
    v.push_back(-20);
    v.push_back(30);
    v.push_back(40);
    vector<int> v2 = v;
    v2.push_back(3);

    cout << divide(v, 10) << endl;
    cout << divide(v2, 10) << endl;

    // COMPLETAR CON MAS PRUEBAS

    return 0;
}