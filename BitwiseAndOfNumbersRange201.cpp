#include <algorithm>

#include <vector>
#include <iostream>

using namespace std;

int rangeBitwiseAnd(long long int left, long long int right)
{
    if (left == right)
    {
        return left;
    }
    
    for (long long int i = left; i <= right; i++)
    {
        left = left & i;
        if (left == 0)
        {
            return left;
        }
    }
    return left;
}

int main()
{

    cout << rangeBitwiseAnd(0, 0);

    return 0;
}
