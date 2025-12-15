// F. Break Number

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll cases , result=0  ;
    cin>>cases;
    for(int i=1 ; i<=cases ;i++)
    {
        ll value ;
        cin>>value;

        int counter=0 ;
        
        if(value % 2 !=0)
        {
            counter=0;
        }
        else
        {
            while(value >0)
            {
                if(value %2 !=0)
                {
                    break;
                }
                else
                {
                counter++;
                value/=2;
                }
            }
        }
        if( counter > result)
        {
            result = counter;
        }
        
    }

        
    cout<<result<<endl;

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

