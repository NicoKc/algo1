int ultimo3(vector<int> v)  //n = |v|
{
    int i = 0;              //1
    while (i < v.size())    //1 + n
    {
        i++;                //n
    }
    return v[i - 1];        //1
}