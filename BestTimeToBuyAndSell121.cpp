#include <algorithm>

#include <vector>
#include <iostream>

using namespace std;
int maxProfit(vector<int> &prices)
{
    int m=0,n=prices[0];
    for (int i = 0; i < prices.size(); i++)
    {
        if(n>prices[i]){
            n=prices[i];

        }
        else{
            if (m<prices[i]-n)
            {
             m=prices[i]-n;
            }
        }

    }
 return m;
    
   
    
}
int main()
{
    vector<int> v = {1};
    cout << maxProfit(v);

    return 0;
}
