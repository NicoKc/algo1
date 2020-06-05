int max(int x, int y) {
    int result = 0;
    if (x < y)
        result = y;
    else
        result = x;
    return result;
}