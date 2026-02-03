#include <bits/stdc++.h>
using namespace std;

void smallCase(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = char(tolower(str[i]));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    smallCase(s1);
    smallCase(s2);

    if (s1 < s2)
        cout << -1 << "\n";
    else if (s1 > s2)
        cout << 1 << "\n";
    else
        cout << 0 << "\n";
}