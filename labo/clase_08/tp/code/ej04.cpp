#include "ej04.h"
#include <fstream>
#include "ejercicios.h"

void versus(string nombreArchivo) {
    ofstream fout1, foutn, fout3, foutlog;
    fout1.open(nombreArchivo + '1');
    foutn.open(nombreArchivo + 'n');
    fout3.open(nombreArchivo + '3');
    foutlog.open(nombreArchivo + "log");
    double t10 = 0;
    double t11 = 0;
    double tn0 = 0;
    double tn1 = 0;
    double t30 = 0;
    double t31 = 0;
    double tlog0 = 0;
    double tlog1 = 0;

    fout1 << 'n' << '\t' << 'y' << endl;
    foutn << 'n' << '\t' << 'y' << endl;
    fout3 << 'n' << '\t' << 'y' << endl;
    foutlog << 'n' << '\t' << 'y' << endl;

    int i = 100;
    while (i < 100000) {
        vector<int> vec = construir_vector(i, "azar");
        t10 = clock();
        vec[0];
        t11 = clock();

        tn0 = clock();
        mostrar_vector(vec);
        tn1 = clock();

        t30 = clock();
        hayDuplicados(vec);
        t31 = clock();

        tlog0 = clock();
        busqueda_binaria(vec, i);
        tlog1 = clock();

        fout1 << i << '\t' << (t11 - t10) << endl;
        foutn << i << '\t' << (tn1 - tn0) << endl;
        fout3 << i << '\t' << (t31 - t30) << endl;
        foutlog << i << '\t' << (tlog1 - tlog0) << endl;

        i = i * 10;
    }

    fout1.close();
    foutn.close();
    fout3.close();
    foutlog.close();
}