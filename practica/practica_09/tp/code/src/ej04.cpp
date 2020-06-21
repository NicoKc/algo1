#include "ej04.h"
#include <iostream>

//int cantidadDeVecesQueApareceSinRepetidosConBusquedaBinaria(matriz mat, int e) {
//    int cant = 0;
//
//    if (mat.size() != 0 && mat[0].size() != 0) {
//
//        int inicio = 0;
//        int fin = mat.size() * mat[0].size();
//        while (inicio + 1 < fin) {
//            int mid = (inicio + fin) / 2;
//            int midf = mid / mat.size();
//            int midc = mid % mat.size();
//
//            if (mat[midf][midc] <= e) {
//                if (mat[midf][midc] == e) {
//                    cant++;
//                }
//                inicio = mid;
//            } else {
//                fin = mid;
//            }
//        }
//    }
//
//    return cant;
//}

int cantidadDeVecesQueAparece(matriz mat, int e) {
    int cant = 0;

    int i = 0;
    int total = mat.size() + mat[0].size();
    while (i <= total) {
        int fila = i / mat[0].size();
        int columna = i % mat[0].size();
        if (mat[fila][columna] == e) {
            cant++;
        }
        i++;
    }

    return cant;
}
