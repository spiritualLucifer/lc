#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &nums, int k)
{
  int x = 0, y = 0;
  bool p = true;
  int i = 0;
  while (p)
  {
    i++;
    if (x == k)
    {
      p = false;
    }
    else if ((nums.size()-1) >= y && i != nums[y])
    {
      x++;
    }
    else if ((nums.size()-1) < y)
    {
      x++;
    }
    else
    {
      y++;
    }
  }
  return i - 1;
}
int main()
{
  vector<int> v = {1, 2, 3, 4};
  int x = 2;
  cout << findKthPositive(v, x);
}