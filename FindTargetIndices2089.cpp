#include <bits/stdc++.h>
using namespace std;
 
     vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v;
        int low=0,high=nums.size()-1;
        sort(nums.begin(),nums.end());
          for (int i = 0; i < nums.size(); i++)
          {
            if (nums[i]==target)
            {
                v.push_back(i);
            }
            
          }
          return v;
         
     }
     
    int main(){

    }