#include "ej02.h"
#include <fstream>
#include "ejercicios.h"

void graficar(string fileName) {
    ofstream fout;
    fout.open(fileName);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<int> vec = construir_vector(i, "azar");
        t0 = clock();
        hayDuplicados(vec);
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}
