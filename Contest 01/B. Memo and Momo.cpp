// B. Memo and Momo

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

ll a ,b,k;     cin>>a>>b>>k;

if(a%k==0  && b%k==0)
cout<<"Both"<<endl;
else if (a%k ==0 && b%k !=0)
cout<<"Memo"<<endl;
else if (a%k !=0 && b%k ==0)
cout<<"Momo"<<endl;
else 
cout<<"No One"<<endl;

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
