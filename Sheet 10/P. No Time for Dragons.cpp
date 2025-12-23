// P. No Time for Dragons

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
    vector<pair<ll, pair<ll, ll>>> v;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i].first = (x - y);
        v[i].second = {x, y};
    }

    sort(v.begin(), v.end());

    ll tot = v[n - 1].second.first;
    ll sol = v[n - 1].second.first - v[n - 1].second.second;

    for (int i = n - 2; i >= 0; i--)
    {
        if (sol < v[i].second.first)
        {
            tot += v[i].second.first - sol;
            sol = v[i].second.first - v[i].second.second;
        }
        else
        {
            sol -= v[i].second.second;
        }
    }

    cout << tot;
}

int main()
{
    fast;

    solve();

    return 0;
}