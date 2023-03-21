#include <bits/stdc++.h>
using namespace std;
vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        v.push_back(first);
        int x;
        for (int i = 0; i < encoded.size(); i++)
        {
            x=v[i]^encoded[i];
            v.push_back(x);
        }
        return v;
        
    }

int main()
{
    int x = 8;
    
}