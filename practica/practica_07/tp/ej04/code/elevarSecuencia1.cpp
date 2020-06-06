void elevarSecuencia(vector<int> &s)
{
    int i = -1;
    while (i < s.size() - 1)
    {
        s[i + 1] = s[i+1]*s[i+1];
        i++;
    }
}