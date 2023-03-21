#include <bits/stdc++.h>
using namespace std;
  bool isPerfectSquare(int num) {
  long long int low =0;
   long long int high =num;
   long long int square;
    while (low<=high)
    {
      long long int mid = (low+high)/2;
       square=mid*mid;
       if (square==num)
       {
        return true;
       }
       else if(square<num){
         low =mid+1;
       }
       else{
        high =mid-1;
       }

       
    }
    return false;

        
    }
    int main(){

    }