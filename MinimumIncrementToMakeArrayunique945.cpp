#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = 0,z=0;
        for (int i = 0; i < nums.size()-1; i++)
        {
          if (nums[i]>=nums[i+1])
          {
           z= nums[i]-nums[i+1]+1;     
           n+=nums[i]-nums[i+1]+1;
           nums[i+1]+=z;
          }
          
        }
        return n;
    }

int main()
{

    vector<int> a = {3,2,1,2,1,7};
    int x = minIncrementForUnique(a);
    cout << x;
}
