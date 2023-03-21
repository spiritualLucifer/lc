#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

   int searchInsert(vector<int>& nums, int target) {
      int x =0;
       for (int i = 0; i < nums.size(); i++)
       {
        if(nums[i] == target){
            x=i;
            break;
        }
        else if(nums[i]>target){
            x=i;
            nums.insert(nums.begin()+i,target);
           break;
        }
        else if(i==nums.size()-1) {
            x=i+1;
            nums.insert(nums.begin()+i+1,target);
            break;
        }
       }
       return x;
        
    }

  int main(){
    vector<int> v={1,3,5,6};
    int target = 0;

   cout<<searchInsert(v,target);
    return 0;
  }
