// E. Construct The Sum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n1, n2;
        cin >> n1 >> n2;
        if (n1 >= n2)
        {
            cout << 1 << " " << n2 << endl;
        }
        else
        {
            if ((((n1) * (n1 + 1)) / 2) < n2)
            {
                cout << -1 << endl;
            }
            else
            {
                ll arr[100001] = {0};
                ll idx = 0, cnt = 0;
                while (n2 != 0)
                {
                    if (n2 >= n1)
                    {
                        arr[idx] = n1;
                        n1--;
                        n2 -= arr[idx];
                        idx++;
                    }
                    else
                    {
                        arr[idx] = n2;
                        n2 = 0;
                    }
                    cnt++;
                }
                cout << cnt << " ";

                for (int i = 0; i < cnt; i++)
                {
                    if (i == cnt - 1)
                    {
                        cout << arr[i];
                    }
                    else
                    {
                        cout << arr[i] << " ";
                    }
                }
                cout << endl;
            }
        }
    }
}

int main()
{
    fast;

    solve();

    return 0;
}