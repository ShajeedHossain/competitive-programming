#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int ct = 0;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x + y + z >= 2)
        {
            ct++;
        }
    }
    cout << ct << "\n";
}