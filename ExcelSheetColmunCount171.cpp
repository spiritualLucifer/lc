#include <bits/stdc++.h>
using namespace std;
int titleToNumber(string columnTitle)
{
    int x = 0, n = columnTitle.length();
    for (int i = n - 1; i >= 0; i--)
    {
        x += pow(26, n - i - 1) * (int(columnTitle[i]) - 64);
    }
    return x;
}

int main()
{
    string s;
    cin>>s;
    cout << titleToNumber(s);
}