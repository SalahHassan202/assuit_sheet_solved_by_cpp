// Y. Spiral

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int r = 0, c = 0;
    while (r < n && c < m)
    {
        for (int i = c; i < m; i++)
        {
            cout << a[r][i] << " ";
        }
        r++;
        for (int i = r; i < n; i++)
        {
            cout << a[i][m - 1] << " ";
        }
        m--;
        if (r < n)
        {
            for (int i = m - 1; i >= c; i--)
            {
                cout << a[n - 1][i] << " ";
            }
            n--;
        }
        if (c < m)
        {
            for (int i = n - 1; i >= r; i--)
            {
                cout << a[i][c] << " ";
            }
            c++;
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}