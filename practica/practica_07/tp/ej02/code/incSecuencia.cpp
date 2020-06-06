void incSecuencia(vector<int> &a)
{
    int i = 0;
    while (i < a.size())
    {
        a[i] = a[i] + 1;
        i++;
    }
}