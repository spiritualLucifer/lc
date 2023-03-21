#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int area(vector<int> &height,int x,int y){
       int p =0;
       if(height[x]>height[y]){
            p=height[y]*(y-x);
        }
        else{
            p=height[x]*(y-x);
        }
        return p;
}

int maxArea(vector<int> &height)
{   
    int count = height.size();
    int x = 0,y = count-1,p=0, max = 0;
    
    for (int i = 0; i < count - 1; i++)
    {
       p =area(height,x,y);
     
      if (height[x] > height[y])
      {
       y--;
      }
      else{
        x++;
      }
      
      if(p>max){
        max=p;
      }
    }

    return max;
}

int main()
{
    vector<int> v = {1,8,6,2,5,4,8,3,7};

    cout << maxArea(v);

    return 0;
}
