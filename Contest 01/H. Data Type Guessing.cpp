//  H. Data Type Guessing

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

double n,k,a,s;
cin>>n>>k>>a;

s=(n*k)/a ;         //68.7
ll y =s ;           // 68
double z =s-y ;     //.7


if (z>0 )
{
    cout<<"double"<<endl;
    return ;
}else 
{
    if (y<=2147483647)
    cout<<"int"<<endl;
    else 
    cout<<"long long"<<endl;
    
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



