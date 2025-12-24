// T. Easter Eggs

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string color = "ROYGBIV";
    string s1 = "G";
    string s2 = "GB";
    string s3 = "GBI";
    string s4 = "GBIV";

    ll size = n - 7; // 7 ===> "ROYGBIV" ===> 7 char
    if (size == 1)
    {
        color += s1;
    }
    else if (size == 2)
    {
        color += s2;
    }
    else if (size == 3)
    {
        color += s3;
    }
    else
    {
        while (size)
        {
            if (size >= 4)
            {
                color += s4;
                size -= 4;
            }
            else if (size == 3)
            {
                color += s3;
                size -= 3;
            }
            else if (size == 2)
            {
                color += s2;
                size -= 2;
            }
            else
            {
                color += s1;
                size -= 1;
            }
        }
    }

    cout << color;
}

int main()
{
    fast;

    solve();

    return 0;
}