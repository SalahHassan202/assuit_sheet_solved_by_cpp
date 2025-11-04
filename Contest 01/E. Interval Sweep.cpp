//  E. Interval Sweep

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

/*
a   ===>   the number of odd
b    ===>   the number of even


2 5  ==> it means that i have  2 number odd    and    5 number even    ....etc

2  3          (difference is 1 between 2 &3 )   ==>    3-2=1
140 141 142 143 144   ====>   2 odd    &&  3 even      ======> cout<< "YES"<<endl;
  
3  1 
77 78 79 80          ====> 2 odd    &&  2 even    ======> cout<< "NO"<<endl;

*/

ll a,b ;        cin >>a>>b;

if ((a==0 && b==0) || abs (a-b)>=2)
cout<< "NO"<<endl;
else 
cout<< "YES"<<endl;

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



