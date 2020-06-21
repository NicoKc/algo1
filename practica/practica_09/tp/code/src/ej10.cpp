#include "ej10.h"
#include "utils.h"

void insert(vector<int> &s, int i) {
    while (i > 0 && s[i] < s[i - 1]) {
        swap(s, i, i - 1);
        imprimir(s);
        i--;
    }
}

vector<int> insertionSort(vector<int> s) {
    cout << "-------InsertionSort-----" << endl;
    int i = 0;
    while (i < s.size()) {
        insert(s, i);
        imprimir(s);
        i++;
    }
    cout << "-----------------------" << endl;
    return s;
}

void selectMin(vector<int> &s, int i) {
    int posMin = i;
    int j = i;
    while (j < s.size()) {
        if (s[posMin] > s[j]) {
            posMin = j;
        }
        imprimir(s);
        j++;
    }
    swap(s, i, posMin);
}

vector<int> selectionSort(vector<int> s) {
    cout << "-------SelectionSort-----" << endl;
    int i = 0;
    while (i < s.size()) {
        selectMin(s, i);
        imprimir(s);
        i++;
    }
    cout << "-----------------------" << endl;
    return s;
}

vector<int> bubbleSort(vector<int> a) {
    cout << "-------BubbleSort-----" << endl;
    int i = 0;
    int j;
    while (i < a.size() - 1) {
        j = 0;
        while (j < a.size() - 1) {
            if (a[j] > a[j + 1]) {
                swap(a, j, j + 1);
            }
            imprimir(a);
            j++;
        }
        imprimir(a);
        i++;
    }
    cout << "-----------------------" << endl;
    return a;
}