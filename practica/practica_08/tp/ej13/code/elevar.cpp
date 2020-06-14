vector<vector<int>> elevar(vector<vector<int>> mat, int n)
{
    vector<vector<int>> res(0);

    int i = n;
    while (i <= n)
    {
        res = multiplicar(res, mat);
        i++;
    }

    return res;
}