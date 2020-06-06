void dividirPorPromedio(vector<int> &s)
{
    int i = 0;

    while (i < (s.size() / 2))
    {
        s[i] = s[i] / promedio(s);
        s[s.size() - i - 1] = s[s.size() - i - 1] / promedio(s);
    }
}

float promedio(vector<int> s)
{
    return sumar(s) / s.size();
}

int sumar(vector<int> s)
{
    int i = 0;
    int suma = 0;
    while (i < s.size())
    {
        suma = suma + s[i];
        i++;
    }
    return suma;
}