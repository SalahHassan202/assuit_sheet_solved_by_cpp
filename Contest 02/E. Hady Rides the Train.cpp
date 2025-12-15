// E. Hady Rides the Train

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    
    ll id ;     // id =seet ;
    cin>>id ;

    ll row = id/4 ;      // int  or long long ===> ignore fractions 
    // try to find column .
    ll column ;

    if (row %2 ==0)
    {
        // row is even 
        column = id %4 ;
    }
    else
    {
        // row is odd 
        column = 3-(id %4);
    }

    cout<< row <<" "<< column <<endl;

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
