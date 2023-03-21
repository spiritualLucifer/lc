#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int lengthOfLastWord(string s)
{
    int n = 0;
    int i = s.length()-1;
    
    
    while (i<s.length())
    {
        if (s[i] == ' ' && n != 0)
        {
            break;
        }
        if (s[i] != ' ')
        {   
            n++;

        }
        i--;
    }
    return n;
}

int main()
{
    string a;
    getline(cin, a);
    cout << lengthOfLastWord(a);
    return 0;
}