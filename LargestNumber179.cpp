#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
// void tonumbs(vector<int> &nums, string x)
// {
//     for (int i = 0; i < x.length(); i++)
//     {
//         nums.push_back(int(x[i]) - 48);
//     }
// }
// string largestNumber(vector<int> &nums)
// {
//     //  sort(nums.begin(), nums.end());
//     for (int i =0 ; i <nums.size() ; i++)
//     {
//         if (nums[i] > 9)
//         {
//             string x = to_string(nums[i]);
//             nums.erase(nums.begin() + i);
//             tonumbs(nums, x);
//             i--;
//         }
      
//     }
//     sort(nums.begin(), nums.end());
//     string ans ;
//     for (int i = nums.size() - 1; i >= 0; i--)
//     {
//         ans += to_string(nums[i]);
//     }
//     return ans;
// }
 string largestNumber(vector<int>& nums) { 
        if(count(nums.begin(),nums.end(),0)==nums.size()) return "0";
        sort(nums.begin(),nums.end(),[](int x,int y){
            string a = to_string(x), b = to_string(y);
            return a+b>=b+a;
        });
        string ans = "";
        for(auto it:nums) ans+=to_string(it);
        return ans;
    }

int main()
{

    vector<int> a = {3,30,34,5,9};
    string x = largestNumber(a);
    cout << x;
}
