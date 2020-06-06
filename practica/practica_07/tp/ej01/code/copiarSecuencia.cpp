vector<int> copiarSecuencia(vector<int> s) {
    vector<int> r;
    int i = 0;
    while (i < s.size())
    {
        r.push_back(s[i]);
        i++;
    }
    return r;
}