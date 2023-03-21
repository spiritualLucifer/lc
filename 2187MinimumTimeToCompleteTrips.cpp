#include <bits/stdc++.h>
using namespace std;
long long minimumTime(vector<int> &time, int totalTrips)
{
    sort(time.begin(), time.end());
    long long trip = 0;
    long long tm = 0, l = 0, r = time.size() - 1;
    long long mid;
    while (trip < totalTrips)
    {
        tm++;
        while (l <= r)
        {
            long long mid = (l + r) / 2;
            if (time[mid] == tm)
            {
                break;
            }
            else if (time[mid] > tm)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        for (long long i = 0; i <= mid; i++)
        {
            if (tm % time[i] == 0)
            {
                trip++;
            }
        }
    }
    return tm;
}

int main()
{
    int x = 8;
}