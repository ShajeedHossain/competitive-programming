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
        string s;
        cin >> s;

        if (s[1] == '+')
            ct++;
        else
            ct--;
    }
    cout << ct << "\n";
}