// U. From S To T

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

using namespace std;

bool check(string s1, string s2)
{
    if (s1.size() > s2.size())
        return false;

    ll idx = 0;

    for (ll i = 0; i < s2.size(); i++)
    {
        if (s1[idx] == s2[i])
            idx++;

        if (idx == s1.size())
            return true;
    }

    return false;
}

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (check(s1, s2))
    {
        map<char, ll> mp1;
        map<char, ll> mp2;

        for (ll i = 0; i < s1.size(); i++)
        {
            mp1[s1[i]]++;
        }

        for (ll i = 0; i < s2.size(); i++)
        {
            mp2[s2[i]]++;
        }

        for (ll i = 0; i < s3.size(); i++)
        {
            mp1[s3[i]]++;
        }

        map<char, ll>::iterator it;

        for (it = mp2.begin(); it != mp2.end(); it++)
        {
            char f = it->first;
            ll s = it->second;

            if (mp1[f] < s)
            {
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fast;

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
