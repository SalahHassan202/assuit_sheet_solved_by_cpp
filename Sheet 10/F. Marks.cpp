// F. Marks

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    char a1[n * k];
    char a2[n * k];
    for (int i = 0; i < n * k; i++)
    {
        cin >> a1[i];
    }

    ll idx = 0;
    for (int i = 0; i < k; i++)
    {
        ll mx = a1[i];
        for (int j = i + k; j < n * k; j++)
        {
            if (mx < a1[j] && (j - i) % k == 0)
            {
                mx = a1[j];
            }
        }
        a2[idx] = mx;
        idx++;
    }

    ll ok = 0;
    for (int a = 0; a < n; a++)
    {
        ll c = 0;
        for (int b = a * k; b < (a + 1) * k; b++)
        {
            if (a1[b] == a2[c])
            {
                ok++;
                break;
            }
            c++;
        }
    }

    cout << ok;
}

int main()
{
    fast;

    solve();

    return 0;
}