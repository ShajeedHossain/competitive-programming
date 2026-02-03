#include <bits/stdc++.h>
using namespace std;

// Time: O(n)
// Space: O(n)
int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    vector<int> minCost(n + 1);

    minCost[0] = cost[0];
    minCost[1] = cost[1];

    for (int i = 2; i < n; i++)
    {
        minCost[i] = min(minCost[i - 1], minCost[i - 2]) + cost[i];
    }
    // here, n is the intermediate stairs before the top
    return min(minCost[n - 1], minCost[n - 2]);
}

// Time: O(n)
// Space: O(1)

int minCostClimbingStairsOptimized(vector<int> &cost)
{
    int n = cost.size();

    int prev0 = cost[0];
    int prev1 = cost[1];

    for (int i = 2; i < n; i++)
    {
        int curr = min(prev1, prev0) + cost[i];
        prev0 = prev1;
        prev1 = curr;
    }
    // here, n is the intermediate stairs before the top
    return min(prev0, prev1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> cost = {5, 18, 4, 15, 6};
    cout << minCostClimbingStairs(cost) << "\n";
    cout << minCostClimbingStairsOptimized(cost) << "\n";
}