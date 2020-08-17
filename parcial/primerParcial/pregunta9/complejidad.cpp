bool f(vector<vector<int> > s) { //|s| = n, |s[0]|=m
  float p;
  float res = 0;
  for (int i = 0; i < s.size(); i++) { //n
    s[i] = g(s[i]);
  }
  return res;
}

vector<int> g(vector<int> v) {
  vector<float> res = v;
  float p = 1;
  for (int i = 0; i < res.size(); i++) { //m
    int j = h(res,i);
    if (i != j) {
       int k = v[i];
       v[i] = v[j];
       v[j] = k;
    }
  }
  return res;
}

// Pre: i <= v.size()
int h(vector<int> v, int i) { //m-1, m-1, m-2, m-3
int res = i;
int j = i+1;
  while (j < v.size()) {
    if (v[j] < v[res])
      res = j;
    j++;
  }
  return res;
}