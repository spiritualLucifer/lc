#include <bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int> &nums)
{
      int n =nums.size();
        vector<int> vect1;
        vector<int> vect2;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                vect1.push_back(nums[i]);
            }
            else
            {
                vect2.push_back(nums[i]);
            }
        }
         int a=0,b=0;
        nums.clear();
        for (int i = 0; i < n; i++)
        {
            if (i%2==0)
            {
                nums.push_back(vect1[a]);
                a++;
            }
            else
            {
                nums.push_back(vect2[b]);
                b++;
            }
            
            
        }
        return nums;
        
    
}
int main()
{
    vector<int> vect = {2,3};

    vector<int> v = sortArrayByParity(vect);
    for (auto i : v)
    {
        cout << i << " ";
    }
}