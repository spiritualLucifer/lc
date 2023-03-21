#include <bits/stdc++.h>
using namespace std;
 int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=0;
        if (nums[0]==nums[nums.size()-1])
        {
           return 0;
        }
        else
        {
            n= nums.size()-2;
        }
        int i=0;
        while (nums[i]==nums[i+1])
        {
            n--;
            i++;
        }
        int j=nums.size()-1;
        while (nums[j]==nums[j-1])
        {
          n--;
          j--;
        }
        
        
        return n;

    }


   

int main()
{
    vector<int> vect = {0, 3, 97, 102, 200};
    int a = 300;
}