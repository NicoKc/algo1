void elevarSecuencia(vector<int> &s)
{
    for(int i = -1;i < s.size() - 1;i++)
    {
        s[i + 1] = s[i+1]*s[i+1];
    }
}