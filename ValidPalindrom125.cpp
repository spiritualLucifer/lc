#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int i = 0;
    while (i < s.length())
    {
        if ((s[i] < 'a' || s[i] > 'z')&&(s[i]<'0'|| s[i]>'9'))
        {
            s.erase(s.begin()+i);
            i--;
            
        }
        i++;
    }
    // string p=s;
   
    // int n=s.length();
    
    // for (int i = 0; i < n/2; i++)
    // {
    //     swap(s[i],s[n-1-i]);
    // }
  
    // if (p==s)
    // {
    //     return true;
    // }
    int x =s.length();
    for (int i = 0,j=x-1; i < x/2,j<=x/2; i++,j--)
    {
        if (s[i]!=s[j])
        {
            return false;
        }
        
    }
    
    
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    cout << isPalindrome(s);

    return 0;
}