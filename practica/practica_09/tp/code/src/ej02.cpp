#include "ej02.h"

bool contieneOrdenada(vector<int> &s, int x) {
    if (s.size() == 0) {
        return false;
    } else if (s.size() == 1) {
        return s[0] == x;
    } else if (x < s[0]) {
        return false;
    } else if (x >= s[s.size() - 1]) {
        return s[s.size() - 1] == x;
    } else {
        int low = 0;
        int high = s.size() - 1;
        while (low + 1 < high) {
            int mid = (low + high) / 2;
            if (s[mid <= x]) {
                low = mid;
            } else {
                high = mid;
            }
        }
        return s[low] == x;
    }
}

int encontrarFaltante(vector<int> s) {
    if (s[s.size() - 1] != s.size())
        return s.size();
    else {
        int inicio = 0;
        int fin = s.size() - 1;
        while (inicio + 1 < fin) {
            int mid = (inicio + fin) / 2;
            if(s[mid] == mid)
            {
                inicio = mid;
            } else {
                fin = mid;
            }
        }
        return inicio + 1;
    }
}