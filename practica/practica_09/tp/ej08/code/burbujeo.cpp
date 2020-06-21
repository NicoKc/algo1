void ordenar(vector<int> &a) {
    int i = 0;
    int j;
    while(i < a.size()-1) {
        j = 0;
        while(j < a.size() - 1) {
            if(a[j] > a[j+1]) {
                swap(a, j, j+1);
            }
            j++;
        }
        i++;
    }
}