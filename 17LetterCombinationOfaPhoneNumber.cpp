#include <bits/stdc++.h>
using namespace std;
vector<string> letterCombinations(string digits)
{
    unordered_map<int, string> m = {
        {2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}

    };
    vector<string> v,u;
    int x,r,d;
    string s;

    for (int i = 0; i < digits.length(); i++)
    {
        x = int(digits[0]) - 48;
        s = m[x];
        d=s.length();
        r=v.size();
        if (i == 0)
        {
            for (int a = 0; a < d; a++)
            {   string temp;
                temp+=s[a];
                v.push_back(temp);
            }
        }
        else
        {
          for (int q = 0; q < r; q++)
          {
            for (int t = 0; t < d; t++)
            {
               u.push_back(v[q]+s[t]);
            }
            
          }
          
            v.clear();
            v=u;
            u.clear();
        }
        
    }
    return v;
}

int main()
{
    int x = 8;
}