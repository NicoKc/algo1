void f1(vector<int> &vec)               //n = |v|/2
{
    i = vec.size() / 2;                 //2
    while (i >= 0) {                    //1 + n
        vec[vec.size() / 2 - i] = i;    //3n
        vec[vec.size() / 2 + i] = 0;    //3n
        i--;                            //n
    }
}