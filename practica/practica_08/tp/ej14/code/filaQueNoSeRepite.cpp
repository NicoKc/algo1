vector<int> filaQueNoSeRepite(vector<vector<bool>> m)
{
    int filaQueNoSeRepite = 0;
    int i = 1;

    while (i < m.size())
    {
        int j = 0;
        bool esDistinta = true;
        while (j < m[i].size() && i != filaQueNoSeRepite)
        {
            esDistinta &= (m[i][j] != m[filaQueNoSeRepite][j];
            j++;
        }

        if (!esDistinta)
        {
            filaQueNoseRepite++;
            i = 0;
        }
        else
        {
            i++;
        }
    }

    return m[filaQueNoSeRepite];
}