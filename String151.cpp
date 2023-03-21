#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

string reverseWords(string s)
{
    vector<string> word;
    string str;
    string str1;

    stringstream ss(s);

    while (ss >> str)
    {
        word.push_back(str);
    }
    reverse(word.begin(), word.end());
    str1 = word[0];
    for (int i = 1; i < word.size(); i++)
    {
        str1 = str1 + " " + word[i];
    }

    return str1;
}

int main()
{
    string a;
    cin >> a;
    cout << reverseWords(a);
    return 0;
}