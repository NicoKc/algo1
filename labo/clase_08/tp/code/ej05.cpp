#include "ej05.h"
#include <fstream>
#include "ejercicios.h"

void size(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<int> vec = construir_vector(i, "azar");
        t0 = clock();
        vec.size();
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}

void push_back(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<int> vec = construir_vector(i, "azar");
        t0 = clock();
        vec.push_back(99);
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}

void pop_back(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<int> vec = construir_vector(i, "azar");
        t0 = clock();
        vec.pop_back();
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}

void acceder(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<int> vec = construir_vector(i, "azar");
        t0 = clock();
        vec[i - 1];
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}

void settear(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<int> vec = construir_vector(i, "azar");
        t0 = clock();
        vec[i - 1] = 6;
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}

void flip(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<bool> vec(i, false);
        t0 = clock();
        vec.flip();
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}

void clear(string nombreArchivo) {
    ofstream fout;
    fout.open(nombreArchivo);
    double t0 = 0;
    double t1 = 0;

    fout << 'n' << '\t' << 'y' << endl;

    int i = 1;
    while (i < 10000) {
        vector<int> vec = construir_vector(i, "azar");
        t0 = clock();
        vec.clear();
        t1 = clock();
        fout << i << '\t' << (t1 - t0) << endl;
        i = i + 500;
    }

    fout.close();
}