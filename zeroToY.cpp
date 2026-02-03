// #include <bits/stdc++.h>
// using namespace std;

// int digitCount(long long val)
// {
//     return int(floor(log10(val)) + 1);
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long long x, y;
//         cin >> x >> y;

//         // long long val = 0;
//         long long ct = 0;

//         while (y != 0)
//         {
//             // long long p = y / (x * 10);
//             int power = digitCount(y)-digitCount();

//             long long p=y/(pow(10,digits)*x);
//             cout << "p: " << p << "\n";

//             if (p > 100)
//                 break;

//             long long pVal = x * int(pow(10, p));

//             if (y - pVal >= 0)
//                 y -= pVal;
//             else
//                 y--;
//             ct++;
//             cout << "p: " << p << ", pVal: " << pVal << ", Val: " << y << "\n ";
//             if (pVal > 2000 || p < 0)
//                 break;
//         }
//         cout << ct << "\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int digitCount(long long val)
{
    if (val == 0)
        return 1;

    int count = 0;
    long long temp = abs(val);

    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        long long val = 0;
        long long ct = 0;

        while (val != y)
        {
            // long long p = y / (x * 10);
            long long p = max(0, (abs(digitCount(y) - digitCount(val)) - 1));

            long long pVal = x * int(pow(10, p));
            // cout << "p: " << p << "\n";

            // if (p > 100)
            //     break;

            // long long pVal = x * int(pow(10, p));

            if (val + pVal <= y)
                val += pVal;
            else
                y++;
            ct++;
            cout << "p: " << p << ", pVal: " << pVal << ", Val: " << val << "\n ";
            if (pVal > 2000 || p < 0 || val < 0 || val > 5000)
                break;
        }
        cout << ct << "\n";
    }
}