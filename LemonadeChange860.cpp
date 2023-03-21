#include <bits/stdc++.h>
using namespace std;
 bool lemonadeChange(vector<int>& bills) {
        int ch_5=0,ch_10=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){ch_5++;}
            else if(bills[i]==10){
                if(ch_5==0){return false;}
                else{ch_5--;}
                ch_10++;
            }
            else{
                if(ch_5<3 && ch_10==0){return false;}
                else if(ch_5==0 && ch_10 !=0){return false;}
                else if(ch_5>=3 && ch_10==0){ch_5-=3;}
                else{ch_5--;ch_10--;}
            }
            
        }
        return true;
    }

int main()
{
    string s;
    getline(cin, s);
   

    return 0;
}