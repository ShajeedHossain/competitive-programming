#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
        {
            int val;
            cin >> val;
            if (val == 1)
            {
                m = i;
                n = j;
            }
        }

    cout << abs(n - 3) + abs(m - 3) << "\n";
}