#include <algorithm>

#include <vector>
#include <iostream>

using namespace std;
void moveZeroes(vector<int> &nums)
{
  int n = nums.size();
  int x = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i]==0)
    {
      x++;
    }
    
  }
  
  for (int b = 0; b < x; b++)
  {
    for (int i = 0; i < n - 1; i++)
    {
      if (nums[i] == 0)
      {
        nums[i] = nums[i + 1];
        nums[i + 1] = 0;
      }
    }
  }
}
int main()
{
  vector<int> v = {0, 1, 0, 3, 12};
  moveZeroes(v);

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}
