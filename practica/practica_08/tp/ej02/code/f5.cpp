void f5(vector<int> &v1, vector<int> &v2){  //n=|v1|, m=|v2|
    vector<int> res();                      
    for(int i=0;i<v1.size(); i++){          //1+1+n+n
        res.push_back(v1[i]);               //n
    }
    for(int i=0;i<v2.size();i++){           //1+1+m+m
        res.push_back(v2[i]);               //m
    }
    return res;
}