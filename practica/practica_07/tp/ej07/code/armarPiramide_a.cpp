void armarPiramide(int v, vector<int> &l)
{
    int i = l.size() / 2;
    while (i < l.size())
    {
        l[l.size() - i] = v + i;
        l[i] = v + l.size() - i - 1;
        i++;
    }
}