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
        string s;
        cin >> s;

        if (s.size() < 11)
        {
            cout << s << "\n";
        }
        else
        {
            cout << s[0] + to_string(s.length() - 2) + s[s.length() - 1] << "\n";
        }
        // cout << "Length: " << s.size() << ", String:  " << s << endl;
    }
}