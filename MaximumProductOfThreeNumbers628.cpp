#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int maximumProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int maxPositive = 1, maxNegative = 1;
    for (int i = 0; i < 3; i++)
    {
        maxPositive *= nums[nums.size() - i - 1];
    }
    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            maxNegative *= nums[nums.size() - 1];
        }
        else
        {
            maxNegative *= nums[i];
        }
    }

    if (maxPositive < maxNegative)
    {
        return maxNegative;
    }
    return maxPositive;
}

int main()
{

    vector<int> a = {-100, -98, -1, 2, 3, 4};
    int x = maximumProduct(a);
    cout << x;
}
