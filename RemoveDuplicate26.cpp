#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

      int removeDuplicates(vector<int>& nums) {
        int x=0;
        int q=nums.size();
        for (int i = 0; i < nums.size()-1; i++)
        {
            
           for(int b=i+1;b<nums.size();b++){
            if(nums[i] == nums[b]){
                nums.erase(nums.begin()+b);
                x++;
            }

           }
        }
        return q-x;
    }

  int main(){
   vector<int> p = {1,1,2};
   cout<<removeDuplicates(p);

    return 0;
  }
