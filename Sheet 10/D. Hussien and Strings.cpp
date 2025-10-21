// D. Hussien and Strings

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size())
    {
        cout << "NO";
        return;
    }
    int ok = 0;
    if (s1 == s2)
    {
        sort(s1.begin(), s1.end());
        for (int i = 0; i < s1.size() - 1; i++)
        {
            if (s1[i] == s1[i + 1])
            {
                ok = 1;
                break;
            }
        }
        if (ok == 1)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        int diff = 0, idx1, idx2, cnt = 0;
        bool close = true;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
            {
                diff++;
                cnt++;
            }
            if (diff == 1 && close)
            {
                idx1 = i;
                close = false;
            }
            if (diff == 2)
            {
                idx2 = i;
                break;
            }
        }
        if (cnt == 2)
        {
            swap(s1[idx1], s1[idx2]);
            if (s1 == s2)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            cout << "NO";
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