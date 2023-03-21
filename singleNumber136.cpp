#include <algorithm>

#include <vector>
#include <iostream>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        n = n ^ nums[i];
    }
    return n;
}

int main()
{
    vector<int> v = {1};
    cout << singleNumber(v);

    return 0;
}
