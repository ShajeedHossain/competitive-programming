#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);

        int prev0 = nums[0];
        int prev1 = max(nums[1], nums[0]);

        for (int i = 2; i < n; i++)
        {
            int curr = max(prev1, prev0 + nums[i]); // take curr+prev0 or take prev1
            prev0 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};