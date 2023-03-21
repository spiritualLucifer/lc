#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s)
{
  int n = 0;
  sort(g.begin(), g.end());
  sort(s.begin(), s.end());
  int i = 0, j = 0;
  while (i < g.size() && j < s.size())
  {
    if (g[i] <= s[j])
    {
      n++;
      i++;
      j++;
    }
    else
    {
      j++;
    }
  }
  return n;
}

int main()
{
  vector<int> v = {1, 2, 3};
  vector<int> a = {1, 1};
  cout << findContentChildren(v, a);

  return 0;
}
