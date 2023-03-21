#include <algorithm>

#include <vector>
#include <iostream>

using namespace std;
  int maxProfit(vector<int>& prices) {
        int max =0;
         int i=0;
            while (prices.size()-1>i)
            {
             if (prices[i]<prices[i+1])
             {
              max=max+prices[i+1]-prices[i];
              i=i+2;
             }
             else{
                i++;
             }
             
            }
            return max;
        
        
    }
int main()
{ 
    vector<int> v ={1,2,3,4,5};
     cout<<maxProfit(v);

    return 0;
}
