#include <bits/stdc++.h>
using namespace std;
int splitNum(int num) {
      string s=to_string(num);
      vector<int>v;
      int x,odd=0,even=0;
      for (int i = 0; i < s.length(); i++)
      {
        x=int(s[i])-48;
        if (x%2==0)
        {
          even++;
        }
        else{
            odd++;
        }
        
       v.push_back(x);
      }
      sort(v.begin(),v.end());
      string p="",q="";
      for (int i = 0; i < s.length(); i++)
      {
        if ((s[i]%2 ==0 && even<=s.length()/2) || odd>=s.length()/2)
        {
            p+=to_string(s[i]);
            even++;
        }
        else{
            q+=to_string(s[i]);
            odd++;
        }
        
      }

      int num1=0;
      int num2=0;

      istringstream ss1(p);
      istringstream ss2(q);
      
      ss1>>num1;
      ss2>>num2;

       return num1+num2;
}
int main()
{
  

    return 0;
}