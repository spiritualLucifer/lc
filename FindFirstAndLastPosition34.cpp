#include <bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int> &nums, int target)
{
  int low = 0, high = nums.size() - 1;
  vector<int> ans;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (nums[mid] == target)
    {
      if (nums[mid] == nums[mid - 1])
      {
        int i = mid;
        while (nums[i - 1] == target)
        {
          i--;
        }
        ans.push_back(i);
      }
      else
      {
        ans.push_back(mid);
      }

      if (nums[mid] == nums[mid + 1])
      {
        int i = mid;
        while (nums[i + 1] == target)
        {
          i++;
        }
        ans.push_back(i);
      }
      else
      {
        ans.push_back(mid);
      }
      return ans;
    }
    else if (nums[mid] > target)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  if (low > high)
  {
    ans.push_back(-1);
    ans.push_back(-1);
  }
  return ans;
}

int main()
{
  vector<int> v = {1};
  int x = 1;
  vector<int> a = searchRange(v, x);
  for (auto i : a)
  {
    cout << i << " ";
  }
}