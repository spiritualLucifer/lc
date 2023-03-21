#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

   vector<int> runningSum(vector<int>& nums) {
   
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = nums[i]+nums[i-1];
    }
       return nums;
        
}

int main()
{
  vector<int> v = {1,2,3,4};
 
  v = runningSum(v);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}
