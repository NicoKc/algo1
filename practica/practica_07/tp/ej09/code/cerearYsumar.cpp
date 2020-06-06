void cerearYsumar(vector<int> &s, int &suma)
{
    int i = 0;
    suma = 0;
    while (i < (s.size() / 4))
    {
        suma = suma + s[i] + s[i + 1] + s[s.size() - i] + s[s.size() - i - 1];
        s[i] = 0;
        s[i + 1] = 0;
        s[s.size() - i] = 0;
        s[s.size() - i - 1] = 0;
        i++;
    }
}