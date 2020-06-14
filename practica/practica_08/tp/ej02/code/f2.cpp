// pre: |vec| > 20000
void f2(vector<int> &vec){              //n = |v|/2
    i = 0;                              //1
    while(i<10000){                     //1 + 10000
        vec[vec.size() / 2 - i] = i;    //30000
        vec[vec.size() / 2 + i] = i;    //30000
        i++;                            //10000
    }
}