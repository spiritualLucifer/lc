#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());

     }
int main()
{
    vector<int> v = {1,2,3};
    
     nextPermutation(v);

    return 0;
}
