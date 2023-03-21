#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int lengths(string s)
{
    int n = s.length();
    char words[n];
    for (int i = 0; i < n; i++)
    {
        words[i] = s[i];
    }

    int a = 1;
    int b = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (words[i] != words[i + 1])
        {
            a++;
        }
    }

    return a;
}
int values(string s)
{
    int x = lengths(s);
    int y = s.length();
    int p = 0, q = 0;
    for (int i = 0; i < y - x; i++)
    {
        for (int b = i; b < x; b++)
        {
            for (int t = b+1; t < x; t++)
            {
                if(s[b] == s[t]){
                    p=0;
                }
                else{
                    p++;
                    if(p>q){
                        q=p;
                        cout<<q<<endl;
                    }
                }
            }
            
        }
    }
    return q;
}

int main()
{
    string a;
    cin >> a;
    cout << values(a);
}