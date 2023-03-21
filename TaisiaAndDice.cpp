#include <algorithm>

#include <vector>
#include <iostream>
using namespace std;

  

int main()
{
    int a;
    cin >> a;
    int x[a], y[a], z[a];
    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];
    }
    for (int i = 0; i < a; i++)
    {
        int m[x[i]];
        m[i] = y[i] - z[i];
        int n = z[i] / (x[i] - 1);
       
        int max = 0;
        
         for (int i = 0; i < x[i]-1; i++)
         {
            max = max + n;
         }
        
        for (int b = 1; b < x[i]; b++)
        {
            if(b<x[i]-1){m[b] = n;}
            else{
                m[b]=z[i]-max;
            }
         
          
        } 
        for (int i = 0; i <sizeof(m)/sizeof(*m); i++)
          {
            cout<<m[i]<<" ";
          }
       cout<<endl;
    }

    return 0;
}
