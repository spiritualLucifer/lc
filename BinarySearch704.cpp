#include <algorithm>

#include <vector>
#include <iostream>

using namespace std;
int search(vector<int> &nums, int target)
{
    auto start = nums.begin();
    auto end = nums.begin();
    if (target == nums[(nums.size() - 1) / 2])
    {
        return (nums.size() - 1) / 2;
    }

    else if (target < nums[(nums.size() - 1) / 2])
    {
        vector<int> vect((nums.size() - 1) / 2);
        copy(start, end + (nums.size() - 1) / 2, vect.begin());
        search(vect, target);
    }
    if (target > nums[(nums.size() - 1) / 2])
    {
        vector<int> vect((nums.size() - 1) / 2);
        copy(start + (nums.size() - 1) / 2, end + nums.size() - 1, vect.begin());
        search(vect, target);
    }

    return -1;
}

int main()
{
    vector<int> v = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << search(v, target);

    return 0;
}
