#include <bits/stdc++.h>
using namespace std;
  int findMin(vector<int>& nums) {
           int i=0,j=nums.size()-1;
        int mid;
         if(nums.size()==1){
             return nums[0];
         }
          while (i<=j)
          {
            mid=(i+j)/2;
           
            
            if (mid !=0 && mid !=nums.size()-1 && nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                break;
            }
            else if ((mid==0 && nums[mid]<nums[mid+1]) || (mid==nums.size()-1 && nums[mid]<nums[mid-1]))
            {
                break;
            }
            else if (nums[mid]>nums[j])
            {
                i=mid+1;
            }
            else
            {
               j=mid-1; 
            }
            
            
          }
          return nums[mid];
    }
    
 

int main()
{
    int x = 8;
} 