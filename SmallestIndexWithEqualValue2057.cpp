#include <vector>
#include <iostream>

using namespace std;

bool isMonotonic(vector<int> &nums)
{
    int p = 0, j = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            p++;
        }
        if (nums[i] > nums[i + 1])
        {
            j++;
        }
        if (j != 0 && p != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> v = {1};

    cout << isMonotonic(v);
    return 0;
}
