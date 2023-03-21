#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(), nums.end());
    int n = nums.size();
    int sum = 0;
    int j = nums.size() - 1, p = 0;
    bool q = false;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        p = i + 1;
        j = nums.size() - 1;
        while (p < j)
        {
            sum = nums[i] + nums[p] + nums[j];

            

           

            if (sum < 0)
            {
                p++;
            }
            else
            {
                j--;
            }
        }
    }

    return ans;
    }


   

int main()
{
    vector<int> vect = {0, 3, 97, 102, 200};
    int a = 300;
    

    vector<int> v = sortArrayByParity(vect);
    for (auto i : v)
    {
        cout << i << " ";
    }
}