// U. T-primes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
ll arr[1000001] = {0};
void solve()
{
    arr[1] = 1;
    for (int i = 2; i <= 1000; i++) // 1000 ===> sqrt(1000000)
    {
        for (int j = 2 * i; j <= 1000000; j += i)
        {
            arr[j] = 1;
        }
    }
    ll n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        ll sq = sqrt(x);
        if ((sq * sq) == x && arr[sq] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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