#include <bits/stdc++.h>
using namespace std;

// int search(vector<int> &nums, int target)
// {
//     int n = nums.size(), i = 0, j = nums.size(), z;
//     z = n - nums[0];
//     if (target = nums[0])
//     {
//         return 0;
//     }
//     else if (target < nums[0])
//     {
//         i = z;
//     }
//     else
//     {
//         j = z - 1;
//     }
//     int mid=0;
//     while (i <= j)
//     {
//         mid = (i + j) / 2;
//         if (nums[mid] == target)
//         {
//             if (target < nums[0])
//             {
//                 return mid + z;
//             }
//             else
//             {
//                 return mid;
//             }
//         }
//         else if (nums[mid] > target)
//         {
//             j = mid - 1;
//         }
//         else
//         {
//             i = mid + 1;
//         }
//     }
//     return -1;
// }
 search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = (low+high) >> 1;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] > target){
                    high = mid - 1;
                }
                else{
                    low = mid + 1; 
                }
            }
            else{
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }


int main()
{
    vector<int> vect ={4,5,6,7,0,1,2};
    int n=0;
    cout<<search(vect,n);
}