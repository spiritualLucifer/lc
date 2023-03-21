#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxOnes = 0, one = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            one++;
            if (maxOnes < one)
            {
                maxOnes = one;
            }
        }
        else{
            one=0;
        }
    }
    return maxOnes;
}

int main()
{
    vector<int> v = {1, 1, 0, 1, 1, 1};
    cout<<findMaxConsecutiveOnes(v);

    return 0;
}
