#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int kth = arr[k - 1];
    int ct = 0;

    for (int val : arr)
    {
        if (val > 0 && val >= kth)
            ct++;
    }
    cout << ct << "\n";
}