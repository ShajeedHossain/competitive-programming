#include <bits/stdc++.h>
using namespace std;

// [TOP DOWN]: Memoization
int climbing_stairs(int n, vector<int> &dp)
{
    if (n == 1)
        return 1; // first step reached in 1 way
    if (n == 2)
        return 2; // second step reached in 2 ways (1 step or 2 steps direct)

    if (dp[n] != -1) // if value is already calculated
        return dp[n];
    return dp[n] = climbing_stairs(n - 1, dp) + climbing_stairs(n - 2, dp);
}

int count_ways(int n)
{
    vector<int> dp(n + 1, -1);
    return climbing_stairs(n, dp);
}

// [BOTTOM UP]: Tabulation
int climbing_stairs(int n)
{
    vector<int> ways(n + 1, 0);
    ways[1] = 1;
    ways[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        ways[i] = ways[i - 1] + ways[i - 2];
    }
    return ways[n];
}

int main(void)
{
}