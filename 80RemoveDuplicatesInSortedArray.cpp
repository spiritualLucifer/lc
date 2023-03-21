#include <bits/stdc++.h>
using namespace std;
 int removeDuplicates(vector<int>& nums) {
        int i=0,j=nums.size()-1,x=1,y=1,n=nums.size(),p;
        while (i<=j)
        { 
            if (nums[i]==nums[i+1]){ x++;}
            else{x=1;}
            
            if (nums[j]==nums[j-1]){y--;}
            else{y=1;}

            if (x>2)
            {
                n--;
                p=nums[i];
                nums.erase(nums.begin()+i);
                nums.push_back(p);
                x--;
            }
            else{
                i++;
            }
            if (y>2)
            {
                n--;
                p=nums[j];
                nums.erase(nums.begin()+j);
                nums.push_back(p);
                y--;
            }
            else{
                j--;
            }
            // if (nums[i]==nums[j])
            // {
            //     /* code */
            // }
        }
        return n;
        
    }

int main()
{
    int x = 8;
}