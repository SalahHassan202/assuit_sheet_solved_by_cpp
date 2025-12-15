// A. Square or rectangle

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
   int t ;
    cin>>t;

    while(t--)
    {
        int num1 , num2 ;
        cin>>num1>>num2 ;

        if(num1 == num2)
        {
            cout<<"Square"<<endl;
        }
        else
        {
            cout<<"Rectangle"<<endl;

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


