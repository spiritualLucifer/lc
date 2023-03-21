#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

     vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        int x=0,y=0;
        for (int i = 0; i < nums.size()-1; i++){
            for (int b = i+1; b < nums.size(); i++)
            {
                if(target == nums[i]+nums[b]){
                y=b;
                x=i;
                break;
                }
            }
            

        }
        a.push_back(x);
        a.push_back(y);

        return a;
        
    }

  int main(){
    vector<int> vect ={2,7,11,15};
    int target =9;
    vector<int> c =twoSum(vect,target);
    for(auto x : c){
        cout<<x<<endl;
    }
    return 0;
  }
