#include "ej06.h"
#include <fstream>
#include "ejercicios.h"

void simulacion(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<int> vec = construir_vector(i, "azar");
        t0 = clock();
        algunSubconjSuma(vec, i - (500 % 84));
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}