// W. Hussien and Arrays 2

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
    ll a[s];
    priority_queue<pair<ll, ll>> pq;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
        pq.push({a[i], i});
    }
    ll ans = 0;
    for (int i = 0; i < s; i++)
    {
        while (!pq.empty() && pq.top().first >= a[i])
        {
            ans = max(ans, pq.top().second - i);
            pq.pop();
        }
    }
    cout << ans;
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