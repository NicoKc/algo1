#include "ej01.h"
#include <fstream>
#include "ejercicios.h"


void duplicados(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;
    long largo = 2200000000;
    vector<double> cs{0.1, 0.01, 1, 10};

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < cs.size()) {
        vector<int> vec = construir_vector(cs[i] * largo, "azar");
        t0 = clock();
        hayDuplicados(vec);
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i++;
    }

    fout.close();
}
