// R. Cut Ribbon

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll res = 0;

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            ll z = (a - b * i - c * j) / d;
            if (z < 0)
                z = 0;
            if (b * i + c * j + d * z == a)
            {
                res = max(res, i + j + z);
            }
        }
    }
    cout << res << endl;
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