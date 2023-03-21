#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int dominantIndex(vector<int> &nums)
{
    int max = 0, index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            index = i;
        }
    }
    sort(nums.begin(),nums.end());
     if (nums[nums.size()-2] !=0 && max/nums[nums.size()-2] < 2 )
     {
       return -1;
     }
     
    return index;
}

int main()
{

    vector<int> a = {0,0,0,1};
    int x = dominantIndex(a);
    cout << x;
}
