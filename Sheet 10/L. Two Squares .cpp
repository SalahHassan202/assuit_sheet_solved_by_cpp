// L. Two Squares
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    double l, s1, s2;
    cin >> l >> s1 >> s2;
    double q;
    cin >> q;
    while (q--)
    {
        double x;
        cin >> x;
        //   if (s1 == s2)
        //   {
        //   cout << "0.000000" << endl;
        //        continue;
        //   }

        double ans = sqrt(2) * (l - sqrt(x)) / (s2 - s1);
        cout << fixed << setprecision(6) << abs(ans) << endl;
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