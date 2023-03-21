#include <bits/stdc++.h>
using namespace std;
 int myAtoi(string s) {
        int a=0;
        istringstream num(s);
        num>>a;
        return a;
    }

int main()
{
    string s;
    getline(cin, s);
    return 0;
}