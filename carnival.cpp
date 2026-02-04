#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int l, a, b;
        cin >> l >> a >> b;

        if ((a + b) % l == 0)
            cout << l - 2 << "\n";
        else
            cout << l - 1 << "\n";
    }
    return 0;
}