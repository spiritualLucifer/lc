#include <bits/stdc++.h>
using namespace std;
 int peakIndexInMountainArray(vector<int>& arr) {
        int i=0,j=arr.size();
        int mid;
          while (i<=j)
          {
            mid=(i+j)/2;
            if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                break;
            }
            else if (arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1])
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
            
            
          }
          return mid;
    }

int main()
{
    int x = 8;
}