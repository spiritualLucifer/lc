#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
// bool canPlaceFlowers(vector<int> &flowerbed, int n)
// {
//   int x = 0, z = 0, b = 0;
//   for (int i = 0; i < flowerbed.size(); i++)
//   {
//     if (flowerbed[i] == 0)
//     {
//       x++;
//     }
//     else if (flowerbed[i] == 1)
//     {
//       b++;
//       x = 0;
//     }
//     if (x >= 3 && x%2!=0)
//     {
//       z = x/2;
//     }
//     // else{
//     //   z=(x/3);
//     // }
//   }
//   cout<<z<<endl;
//   if (b==0){z++;}
//   if (z>=n){return true;}
//   return false;
// }

 bool canPlaceFlowers(vector<int> flowerbed, int n) {
       int leftPointer = 0;
        int currentPointer = flowerbed[0];
        int count=0;
        for (int rightPointer = 1; rightPointer < flowerbed.size(); rightPointer++) {
            if (currentPointer== 0 && currentPointer == leftPointer && currentPointer==flowerbed[rightPointer]) {
                count++;
                leftPointer=1;
            }else{
                leftPointer=currentPointer;
            }
            currentPointer=flowerbed[rightPointer];
        }
        if(leftPointer==0 && leftPointer==currentPointer){
            count++;
        }
        return count>=n;
    }


int main()
{

  vector<int> a = {1,0,0,0,1};
  int n=1;
  bool x = canPlaceFlowers(a, n);
  cout << x;
}
