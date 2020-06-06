void multiplicar(vector<int> s)
{
    int i = s.size() / 2;

    while (i < s.size())
    {
        s[s.size() - i] = 10 * s[s.size() - i];
        s[i] = 10 * s[i];
        i++;
    }
}