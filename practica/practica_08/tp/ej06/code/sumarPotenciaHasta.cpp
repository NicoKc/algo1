int sumarPotenciaHasta(int n) {
    int res = 0;            //1
    int i = 1;              //1
    while(i < n) {          //1 + n/2 * (
        res = res + i;      //2
        i = i * 2;          //2
    }
    return res;
}                           // = 3 + n/2 *(4) = 3 + 2n