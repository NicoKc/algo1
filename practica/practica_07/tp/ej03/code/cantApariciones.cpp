int cantApariciones(vector<int> s, int e)
{
    int r = 0;
    for (int i = 0;i<s.size(); i++){
        if(s[i] = e) 
            r++;
    }
    return r;
}