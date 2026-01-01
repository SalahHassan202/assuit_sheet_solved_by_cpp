// O. Yaroslav and Permutations

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll mx = 0;
    for (auto it : mp)
    {
        mx = max(mx, it.second);
    }

    if (mx <= ((n + 1) / 2))
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    fast;

    solve();

    return 0;
}