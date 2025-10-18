// Z. Fraction

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

ll gcd(ll n1, ll n2)
{
    while (n2 != 0)
    {
        return gcd(n2, n1 % n2);
    }
    return n1;
}

ll lcm(ll n1, ll n2)
{
    return ((n1 / gcd(n1, n2)) * n2);
}

void solve()
{
    ll a, b, c, d;
    char c1, c2;
    cin >> a >> c1 >> b >> c >> c2 >> d;

    cout << lcm(a, c) << "/" << gcd(b, d) << endl;
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