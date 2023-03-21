#include <algorithm>

#include <vector>
#include <iostream>
using namespace std;

int tankFuel(int tank, int i, vector<int> &gas, vector<int> &cost)
{
    for (int x = i; x < gas.size() + i; x++)
    {
        if (x < gas.size())
        {
            tank = tank - cost[x] + gas[x + 1];
        }
        else if(tank <0){
            break;
        }
        else
        {
            tank = tank - cost[x - gas.size()] + gas[x - gas.size()];
        }
    }
    return tank;
}

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int tank = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        tank = gas[i];
        if (tank > cost[i])
        {
            tank = tankFuel(tank, i, gas, cost);
            if (tank >= 0)
            {
                return i;
                break;
            }
            else
            {
                tank = 0;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int> x = {3,4,5,1,2};

    cout << canCompleteCircuit(a, x);

    return 0;
}
