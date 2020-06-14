////
//// Created by nico on 11/06/20.
////
//
//#include <vector>
//#include <iostream>
//#include "opcion1.h"
//
//int dist(int x, int y) {
//    return abs(x - y);
//}
//
//bool pertenece(vector<int> s, int e) {
//    int i = 0;
//    bool result = false;
//
//    while (i < s.size()) {
//        if (e == s[i]) {
//            result = true;
//        }
//        i++;
//    }
//
//    return result;
//}
//
//bool esLaMenorDistancia(vector<int> s, int indice, int j) {
//    int i = 0;
//    int menorDistancia = s.size();
//
//    while (i < s.size()) {
//        if ((i != j) && (s[i] != 0) && (menorDistancia >= dist(indice, i))) {
//            menorDistancia = dist(indice, i);
//        }
//        i++;
//    }
//
//    int laQueVoyAComprara = dist(indice, j);
//
//    return (laQueVoyAComprara <= menorDistancia);
//}
//
//bool esLaMenorOIgualDistancia(vector<int> s, vector<int> js, int indice, int k) {
//    int i = 0;
//    int menorDistancia = s.size();
//
//    while (i < s.size()) {
//        if ((i != k) && (s[i] != 0) && !pertenece(js, i) && (menorDistancia >= dist(indice, i))) {
//            menorDistancia = dist(indice, i);
//        }
//        i++;
//    }
//
//    return dist(indice, k) <= menorDistancia;
//}
//
//vector<int> posiblesJ(vector<int> s, int indice) {
//    vector<int> js(0);
//
//    int i = 0;
//    while (i < s.size()) {
//        if ((i != indice) && (s[i] != 0) && esLaMenorDistancia(s, indice, i)) {
//            js.push_back(i);
//        }
//        i++;
//    }
//
//    return js;
//}
//
//vector<int> posiblesK(vector<int> s, vector<int> js, int indice) {
//    vector<int> ks(0);
//
//    int i = 0;
//    while (i < s.size()) {
//        if ((i != indice) && (s[i] != 0) && !pertenece(js, i) && esLaMenorOIgualDistancia(s, js, indice, i)) {
//            ks.push_back(i);
//        }
//        i++;
//    }
//
//    return ks;
//}
//
//void imprimir(vector<int> v) {
//    cout << "[";
//
//    for (int i = 0; i < v.size(); i++) {
//        if (i != 0) {
//            cout << ", ";
//        }
//        cout << v[i];
//    }
//
//    cout << "]" << endl;
//}
//
//void obtener(vector<int> s, int indice) {
//    vector<int> js(0);
//    vector<int> ks(0);
//
//    js = posiblesJ(s, indice);
//    ks = posiblesK(s, js, indice);
//
//    cout << "Para el Indice " << indice << endl;
//    cout << "Posibles J";
//    imprimir(js);
//    cout << "Posibles K";
//    imprimir(ks);
//    cout << ";" << endl;
//}
