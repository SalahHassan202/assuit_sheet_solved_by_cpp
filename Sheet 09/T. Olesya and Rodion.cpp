// T. Olesya and Rodion

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int s, n;
    cin >> s >> n;
    string ans = "";
    if (s < 2 && n == 10) // s < 2  ===> s = 1
    {
        cout << -1;
    }
    else if (s >= 2 && n == 10) // s == 2 or 3 or 4 or 5 ....
    {
        // s = 2    n == 10         ans = 10
        // s = 3    n == 10         ans = 110
        // s = 4    n == 10         ans = 1110
        // s = 5    n == 10         ans = 11110
        for (int i = 0; i < s - 1; i++)
        {
            ans += 1 + '0'; // '0'   ==> ascii code
        }
        ans += 0 + '0';
        cout << ans;
    }
    else // (s >= 2 && n != 10)
    {
        // s = 3    n == 9        ans = 999
        // s = 5    n == 4        ans = 44444
        // s = 8    n == 3        ans = 33333333
        for (int i = 0; i < s; i++)
        {
            ans += n + '0'; // '0'   ==> ascii code
        }
        cout << ans;
    }
}
int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}