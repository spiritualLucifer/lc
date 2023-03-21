#include <algorithm>

#include <vector>
#include <iostream>

using namespace std;
vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
   
  while(nums1.size()>m){
    nums1.pop_back();
  }

    for(int i=0;i<n;i++){
        nums1.push_back(nums2[i]);

    }
    sort(nums1.begin(), nums1.end());

    return nums1;
}
int main()
{
    vector<int> v = {1};
    vector<int> x = {};
    vector<int> m = merge(v,1,x,0);

    for (int i = 0; i < m.size(); i++)
    {
        cout<<m[i]<<" ";
    }
    

    return 0;
}
