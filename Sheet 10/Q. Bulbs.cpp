// Q. Bulbs

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll s;
    cin >> s;
    vector<ll> a(s);
    for (int i = 0; i < s; i++)
        cin >> a[i];

    ll res = 0;
    for (ll i = 0, last = 0; i < s; i++)
    {
        last = max(last, a[i]);
        if (i + 1 == last)
            res++; // 1 based index
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