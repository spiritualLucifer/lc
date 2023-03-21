#include <bits/stdc++.h>
using namespace std;
string toGoatLatin(string sentence)
{
    string s = "a";
    string a;

    for (int i = 0; i < sentence.length() - 1; i++)
    {
        if (sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'a' || sentence[i] == 'e')
        {
            while (i < sentence.length() - 1 && sentence[i + 1] != ' ')
            {
                i++;
            }
            sentence.insert(i, "ma");
            i += 2;
            sentence.insert(i, s);
            s += 'a';
            i += s.length();
        }

        else
        {
            a = sentence[i];
            sentence.erase(sentence.begin() + i);
            while (i < sentence.length() - 1 && sentence[i + 1] != ' ')
            {
                i++;
            }
            sentence.insert(i, a);
            i++;
            sentence.insert(i, "ma");
            i += 2;
            sentence.insert(i, s);
            i += s.length();
            s += 'a';
        }
        i++;
    }
    return sentence;
}

int main()
{
    string s;
    getline(cin, s);
    cout << toGoatLatin(s);

    return 0;
}