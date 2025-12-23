// M. Postcard

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n;
    cin >> n;

    ll a = 0, b = 0, c = 0, d = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '?' && s[i] != '*')
            a++;
        else
            b++;

        if (s[i] == '*')
            c++;
    }

    if (a - n == 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '?' && s[i] != '*')
                cout << s[i];
        }
    }
    else if (a > n)
    {
        if (b >= a - n)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (i + 1 < s.size() && s[i] != '?' && s[i] != '*' && (s[i + 1] == '*' || s[i + 1] == '?'))
                {
                    s[i] = '#';
                    d++;
                }
                if (d == a - n)
                    break;
            }

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                    cout << s[i];
            }
        }
        else
        {
            cout << "Impossible";
        }
    }
    else if (a < n)
    {
        if (c == 0)
        {
            cout << "Impossible";
        }
        else
        {
            ll idx = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '*')
                {
                    idx = i;
                    break;
                }
            }

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                    cout << s[i];

                if (i == idx)
                {
                    for (int j = 0; j < n - a; j++)
                        cout << s[i - 1];
                }
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
