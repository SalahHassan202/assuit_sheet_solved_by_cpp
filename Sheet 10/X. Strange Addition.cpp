// X. Strange Addition

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
    ll ok = 0;
    ll a[s];
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    vector<ll> v;
    for (int i = 0; i < s; i++)
    {
        if (a[i] == 0 || a[i] == 100)
        {
            v.push_back(a[i]);
        }
        else if (a[i] >= 1 && a[i] <= 9 && !ok)
        {
            v.push_back(a[i]);
            ok = 1;
        }
    }

    if (ok)
    {
        for (int i = 0; i < s; i++)
        {
            if (a[i] >= 10 && a[i] < 100 && a[i] % 10 == 0)
            {
                v.push_back(a[i]);
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < s; i++)
        {
            if (a[i] >= 10 && a[i] < 100)
            {
                v.push_back(a[i]);
                break;
            }
        }
    }

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}