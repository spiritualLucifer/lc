#include <bits/stdc++.h>
using namespace std;
 bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>m;
        for(int i=0; i<magazine.size(); i++){
            m[magazine[i]]++;
            cout<< m[magazine[i]]<<endl;
        }
        for(int i=0; i<ransomNote.size(); i++){
            if(m[ransomNote[i]]){
                m[ransomNote[i]]--;
                cout<< m[ransomNote[i]]<<endl;
                if(m[ransomNote[i]]==0){
                    m.erase(m[ransomNote[i]]);
                }
            }
            else{
                return false;
            }
        }
        return true;
    }

int main()
{
   string s="aaa";
   string b="aaaab";

    cout<< canConstruct(s,b);
   
    return 0;
}