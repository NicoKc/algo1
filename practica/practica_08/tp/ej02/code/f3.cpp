int f3(vector<int> &v1, int e) {    //n=|v|
    int i = 0;                      //1
    while (v1[i] != e) {            //1+n
        i++;                        //n
    }
    return i;
}