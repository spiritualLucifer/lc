#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
         else if((nums[low] == nums[mid]) && (nums[high] == nums[mid]))
            {
                low++;
                high--;
            }

        else if (nums[low] <= nums[mid])
        {
            if (nums[mid] > target && target >= nums[low])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[high] >= target && target > nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high= mid - 1;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> vect = {4, 5, 6, 7, 0, 1, 2};
    int a = 0;
    cout << search(vect, a);
}