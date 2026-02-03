#include <bits/stdc++.h>
using namespace std;

int digitCount(long long val)
{
    if (val == 0)
        return 1;

    int count = 0;
    long long temp = abs(val);

    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    return count;
}