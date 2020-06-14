int calcularCosto(vector<vector<int>> mat)
{
    int costo = 0;
    int i = 1;
    while (i < mat.size())
    {
        int j = 1;
        while (j < mat[i].size())
        {
            costo++;
            j++;
        }
        i++;
    }
    return costo;
}