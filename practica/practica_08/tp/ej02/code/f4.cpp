void f4(vector<int> &vec) {                 //n = |vec|
    int rec = 0;                            //1
    int max_iter = 1000;                    //1
    if (max_iter > vec.size()){             //1
        max_iter = vec.size();              //1
    }

    for (int i=0; i< max_iter; i++){        //1 + 1 + n + n
        for(int j=0; j<max_iter; i++){      //n * (1 + 1 + n + n)
            res += vec[i] * vec[j];         //n*n*(3)
        }
    }
}