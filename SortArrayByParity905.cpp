#include <bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int> &nums)
{
    int i = 0, k = 0, n = nums.size();
    vector<int> vect;
    while (k < 2)
    {
        if (nums[i] % 2 == 0 && k == 0)
        {
            vect.push_back(nums[i]);
        }
        else if (nums[i] % 2 != 0 && k == 1)
        {
            vect.push_back(nums[i]);
        }
        if (i == n-1)
        {
            k++;
            i = 0;
        }
        else
        {
            i++;
            cout<<i<<endl;
        }
    }
    return vect;
}
int main()
{
    vector<int> vect = {3, 1, 2, 4};

    vector<int> v = sortArrayByParity(vect);
    for (auto i : v)
    {
        cout << i << " ";
    }
}