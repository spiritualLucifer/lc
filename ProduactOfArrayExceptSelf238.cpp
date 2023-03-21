#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int product1 = 1, Zeros = 0, product2 = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        product1 *= nums[i];
        if (nums[i] != 0 && Zeros == 1)
        {
            product2 *= nums[i];
        }
        if (nums[i] == 0 && Zeros < 2)
        {
            Zeros++;
        if(Zeros>1){
        for(int i=0;i<nums.size();i++){
            nums[i]=0;
        }
        return nums;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            if (Zeros > 1)
            {
                nums[i] = product1;
            }
            else
            {
                nums[i] = product2;
            }
        }
        else
        {
            nums[i] = product1 / nums[i];
        }
    }
    return nums;
}

int main()
{
    int x = 8;
}