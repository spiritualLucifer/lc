#include <bits/stdc++.h>
using namespace std;
int minCostToMoveChips(vector<int> &position)
{
    // if (position.size() == 1)
    // {
    //     return 0;
    // }

    // sort(position.begin(), position.end());
    // int x = 1, max = 0, maxValue, cost = 0;
    // for (int i = 0; i < position.size() - 1; i++)
    // {
    //     if (position[i] == position[i + 1])
    //     {
    //         x++;
    //     }
    //     else
    //     {
    //         if (x > max)
    //         {
    //             max = x;
    //             maxValue = position[i];
    //         }

    //         x = 1;
    //     }
    // }
    // for (int i = 0; i < position.size(); i++)
    // {
    //     if (abs(position[i] - maxValue) % 2 != 0)
    //     {
    //         cost++;
    //     }
    // }

    // return cost;
    int odd = 0, even = 0;
        for(auto i : position)
        {
            if(i%2)
            odd++;
            else
            even++;
        }
        return min(odd,even);
}
int main()
{

    return 0;
}