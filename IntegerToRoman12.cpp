#include <bits/stdc++.h>
using namespace std;
string intToRoman(int num)
{
    unordered_map<int, string> m = {
        {1, "I"},
        {5, "V"},
        {10, "X"},
        {50, "L"},
        {100, "C"},
        {500, "D"},
        {1000, "M"}

    };
    string s = "";
    int n = 0;
    for (int i = 1000; i >= 1; i = i / 10)
    {
        n = num / i;
        if (n != 0)
        {
            if (n < 4)
            {
                for (int b = 0; b < n; b++)
                {
                    s += m[1 * i];
                }
            }
            else if (n == 4)
            {
                s += m[1 * i];
                s += m[5 * i];
            }
            else if (n > 4 && n < 9)
            {
                s += m[5 * i];
                for (int b = 1; b < n - 5; b++)
                {
                    s += m[1 * i];
                }
            }
            else
            {
                s+=m[1*i];
                s+=m[1*i*10];
            }
            
        }
        else
        {
            break;
        }
       
    } 
    return s;
}

int main()
{
    int x = 8;
    cout << intToRoman(x);
}