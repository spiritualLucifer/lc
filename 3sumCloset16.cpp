#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &nums, int target)
{
    // sort(nums.begin(), nums.end());
    // int n = nums.size();
    // int sum = 0, max = INT32_MAX, ans;
    // int i = 0, j = nums.size() - 1, p = 0;
    // bool q = false;
    // while (i < (j + 1))
    // {
    //     p = i + 1;
    //     while (p < j)
    //     {
    //         sum = nums[i] + nums[p] + nums[j];
    //         cout << sum << endl;
    //           if(target==sum){
    //             return sum;
    //         }
    //         if (sum <= target && target-sum < max)
    //         {

    //             max = target-sum;
    //             q = true;
    //         }
    //         else if (target < sum && sum-target<max)
    //         {
    //              max = sum - target;
    //             q = true;
    //         }

    //         if (q)
    //         {
    //             ans = sum;
    //             cout << ans << endl;
    //             q = false;
    //         }

    //         p++;
    //     }
    //     if(sum<target){
    //        i++;

    //    }
    //    else{
    //        j--;
    //    }
    // }
    // return ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int sum = 0, max = INT32_MAX, ans;
    int j = nums.size() - 1, p = 0;
    bool q = false;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        p = i + 1;
        j = nums.size() - 1;
        while (p < j)
        {
            sum = nums[i] + nums[p] + nums[j];
            cout << sum << endl;
            if (target == sum)
            {
                return sum;
            }
            if (sum <= target && target - sum < max)
            {

                max = target - sum;
                q = true;
            }
            else if (target < sum && sum - target < max)
            {
                max = sum - target;
                q = true;
            }

            if (q)
            {
                ans = sum;
                cout << ans << endl;
                q = false;
            }

            if (sum < target)
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
    cout << threeSumClosest(vect, a);

    // vector<int> v = sortArrayByParity(vect);
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
}