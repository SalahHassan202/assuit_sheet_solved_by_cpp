// G. Smallest Product

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
// 4 2 1 10 6     ===> 4*2*1*10*6 =480
// 3 * 3 *3 * 3* 3 = 243
// 4×4×4×4×4 = 1024
// 1024 ====> answer = 4

// log(x^y) = y log(x)
// log(x^y) = log(x)+log(y)

// x^n = m
// n log(x) = log(m) ==> m is a product of all num in array
// m = m1*m2*m3*m4*m5*.......*mn
// nlog(x) = log(m1*m2*m3*m4*m5)
// nlog(x) = log m1 + log(m2)+ log(m3)+ log(m4)+ log(m5)
// sum = log m1 + log(m2)+ log(m3)+ log(m4)+ log(m5)
// nlog(x) = sum
// log(x) = sum / n
// x = 10^ (sum/n)
// x > 10^ (sum/n)

void solve()
{
    ll s;
    cin >> s;
    vector<ll> a(s);
    double sum = 0.0;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
        sum += log10(a[i]);
    }
    cout << (ll)pow(10, (sum / s)) + 1 << endl;
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