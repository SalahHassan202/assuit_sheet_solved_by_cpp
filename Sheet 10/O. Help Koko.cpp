// O. Help Koko

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false; // 0
        }
    }
    return true; // 1
}
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        ll oper;
        cin >> oper;
        if (oper == 1)
        {
            if (isPrime(a[i]) == 1)
            {
                if (a[i] % 2 == 0) // even
                {
                    cout << 0 << " ";
                }
                else // odd
                {
                    cout << 5 << " ";
                }
            }
            else
            {
                cout << -1 << " ";
            }
        }
        else // oper == 2
        {
            cout << 0 << " ";
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}