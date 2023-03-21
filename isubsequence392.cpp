#include <algorithm>
#include <iostream>


using namespace std;
 bool isSubsequence(string s, string t) {
 int x=0;
 for (int i = 0; i < t.length(); i++)
 {
    if (s[x]==t[i])
    {
        x++;
    }
    
 }
 if (x==s.length())
 {
    return true;
 }
 else{
    return false;
 }
 
}


int main()
{   
    string a ="axc";
    string b ="ahbgdc";
    bool x = isSubsequence(a,b);
    cout<<x;


  return 0;
}
