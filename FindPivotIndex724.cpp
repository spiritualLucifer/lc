#include <algorithm>

#include <vector>
#include <iostream>

using namespace std;

int pivotIndex(vector<int> &nums)
{
  int sum = 0, msum = 0;
  for (auto i : nums)
  {
    sum += i;
  }

  int len = nums.size();
  for (int i = 0; i < len; i++)
  {
    sum -= nums[i];
    if (sum == msum)
    {
      return i;
    }
    msum += nums[i];
  }
  return -1;
}

int main()
{
  vector<int> v = {-1, -1, -1, -1, -1, 0};

  int x = pivotIndex(v);
  cout << x;

  return 0;
}
