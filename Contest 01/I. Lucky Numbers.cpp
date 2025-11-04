//  I. Lucky Numbers

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

string a ;    // "65"     ['6' , '5' ]
cin>>a;    
ll n1 =a[0] -'0';
ll n2 =a[1] -'0';
//   cout <<a[0]<< "   "<<a[1]<<endl;    ====>    6    5
if(n2 ==0)
{
    cout<<"YES"<<endl;
    return ;
} 

if (n1% n2 ==0 || n2 %n1 ==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;


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



