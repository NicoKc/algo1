#include "ejercicio4.h"
#include <iostream>
#include <sstream>

void swap(vector<string> &s, int i, int j) {
    string aux = s[i];
    s[i] = s[j];
    s[j] = aux;
}

bool esMenor(string &x, string &y) {
    bool res = false;
    bool igualdad = x.size() < y.size();

    int largo = x.size();

    if (largo > y.size())
        largo = y.size();

    for (int i = 0; i < largo && !res; ++i) {
        cout << int(x[i]) << " " << int(y[i]) << endl;
        res = int(x[i]) < int(y[i]);
        igualdad &= int(x[i]) == int(y[i]);
    }

    return res || igualdad;
}

string toUpper(std::string s){
    for(int i=0;i<(int)s.length();i++){s[i]=toupper(s[i]);}
    return s;
}

bool compareNat(const std::string& a, const std::string& b){
    if (a.empty())
        return true;
    if (b.empty())
        return false;
    if (isdigit(a[0]) && !isdigit(b[0]))
        return true;
    if (!isdigit(a[0]) && isdigit(b[0]))
        return false;
    if (!isdigit(a[0]) && !isdigit(b[0]))
    {
        if (a[0] == b[0])
            return compareNat(a.substr(1), b.substr(1));
        return (toUpper(a) < toUpper(b));
    }

    istringstream issa(a);
    istringstream issb(b);
    int ia, ib;
    issa >> ia;
    issb >> ib;
    if (ia != ib)
        return ia < ib;

    string anew, bnew;
    getline(issa, anew);
    getline(issb, bnew);
    return (compareNat(anew, bnew));
}

void insert(vector<string> &s, int i) {
    for (int j = i; j > 0 && compareNat(s[j], s[j - 1]); j--) {
        swap(s, j, j - 1);
    }
}

void insertionSort(vector<string> &s) {
    for (int i = 0; i < s.size(); ++i) {
        insert(s, i);
    }
}

void natSorted(vector<string> &s) {
    insertionSort(s);
}
