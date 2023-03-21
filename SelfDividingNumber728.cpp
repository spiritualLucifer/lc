#include <bits/stdc++.h>
using namespace std;
  vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        string s="";
        for (int i = left; i <= right; i++)
        {   
            s=to_string(i);
            for (int b = 0; b < s.length(); b++)
            {   if((int(s[b])-48)==0){
                 break;
                }
               else if(i%(int(s[b])-48) !=0){
                   break;
                }
                if(b==s.length()-1){
                    ans.push_back(i);
                }
            }
            
        }
        return ans;
    }

int main()
{
    string s;
    getline(cin, s);
   

    return 0;
}