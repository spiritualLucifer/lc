#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
   if (x == 0)
   {
      return x;
   }
   string s = to_string(x);
   int n = s.length() - 1;
   bool p = false;
   while (s[n] == '0')
   {
      s.pop_back();
      n--;
   }
   char c;
   if (s[0] < '0')
   {
      c = s[0];
   }
   for (int i = 0; i <= n / 2; i++)
   {
      swap(s[i], s[n - i]);
   }
   if (s[n] < '0')
   {
      p = true;
      s.pop_back();
   }

   
   int num=0;
   istringstream(s) >> num;
   // for (int i = s.length()-1; i >=0; i--)
   // {
   //    num +=pow(10,s.length()-1-i)*(int(s[i])-48);
   // }
   
   if (p)
   {
      num = -num;
   }
   if (num>=2147483647 || num<=-2147483647)
   {
      return 0;
   }
   
  return num;
}

int main()
{
   int x = 1534236469;
   cout << reverse(x);

   return 0;
}