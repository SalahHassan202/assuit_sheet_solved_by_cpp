// D. Range Sum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    
ll lines ;
cin>>lines;

while(lines--)
{
    ll num1 , num2 ,mn,mx;   // mn ===>min    && mx====> max
    
    cin>>num1>>num2;
    mx =max(num1 ,num2);
    
    mn =min(num1 ,num2);


    mn--;     

    ll result1 = mn*(mn+1)/2  ;    // summition of 0 to num1--
    ll result2 = mx*(mx+1)/2  ;    // summition of 0 to num2

    cout<< result2 -result1 <<endl;


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
