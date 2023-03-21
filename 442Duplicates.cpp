#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    int swap;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != nums[nums[i] - 1])
        {
            swap = nums[i];
            nums[i] = nums[nums[i] - 1];
            nums[nums[i] - 1] = swap;
            i--;
        }
        else if (nums[i] == nums[nums[i] - 1] && nums[i] != i + 1)
        {
            ans.push_back(nums[i]);
        }
    }

    return ans;
}

int main()
{
    vector<int> s = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> p = findDuplicates(s);
    for (auto i : p)
    {
        cout << i << " ";
    }

    return 0;
}