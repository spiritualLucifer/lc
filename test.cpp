#include <bits/stdc++.h>
 
using namespace std;
int callvalue(string vector){
    string s="3141592653589793238462643383279";
    int mn=0, index=0;
    for (int i = 0; i < vector.length(); i++)
    {
        if(vector[i] != s[i]) return mn;
        else if(vector[i]==s[i])
       {
            mn++;
       }


       
    }
    return mn;
    
}
 
int main(int argc, char const *argv[])
{
   int t;
   cin >> t; 
   string vector;
   for (int i = 0;  i < t; i++)
   {
        cin >> vector;
        cout << callvalue(vector)<<endl;
   }
   
 
  return 0;
}