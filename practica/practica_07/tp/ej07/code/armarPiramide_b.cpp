void armarPiramide(int v, vector<int> &l)
{
    int i = 0;
    while (i < l.size())
    {
        if (i < (l.size() / 2))
        {
            l[l.size() - i] = v + i;
        }
        else
        {
            l[i] = v + l.size() - i - 1;
        }
        i++;
    }
}