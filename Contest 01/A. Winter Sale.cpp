// A. Winter Sale

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
15    20 
15 ====>the discount percentage
20 ====>the price of t-shirt after discount

100% -15% =85%
85% is the percentage  discount 
20  is the price of t-shirt         

20 /85 =0.23529 

0.23529  * 15  = 3.529411

3.529411 +20  = 23.529411 

*/

double x , y ;   // x==>  the discount percentage    // y ==> the price of t-shirt after discount
cin>> x>>y ;
double z = 100-x ;    //is the percentage  discount 
double w = y/z ;    // this is the percentage 
double v = w*x  ;   //ALL discount from t- shirt
double p= v + y;    // the price of t-shirt before discount
      
 cout <<fixed<<setprecision(2)<<p<<endl;

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
