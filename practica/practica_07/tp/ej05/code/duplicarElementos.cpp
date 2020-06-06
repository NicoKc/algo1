void duplicarElementos(vector<int> &s)
{
    int i = 0;
    while (i < s.size()/2)
    {
        s[s.size()-((2*i) + 1)] = s[s.size()-((2*i) + 1)] * 2;
        s[s.size()-((2*i) + 2)] = s[s.size()-((2*i) + 2)] * 2;
        i++;
    }
}