// C. Finding Minimums

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int size , sequance;
    cin>> size >>sequance;
    int counter =0 ;
    int min , flag =1 ;

    for(int i= 1 ; i<=size ;i++)
    {
        int number;
        cin>>number;
        if(flag)
        {
            min =number;
            flag=0;
        }
        else
        {
            if(number< min)
            {
                min=number;
            }
        }
        counter++;

        if(counter ==sequance || i ==size)
        {
            cout<<min<<" ";
            counter =0 ;
            flag =1;
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
