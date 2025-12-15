// B. Drawing 'X'

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int num;
    cin>>num;

    for(int i =0 ; i<num ;i++)
    {
        for(int j=0 ;j< num ; j++)
        {
            if(i==j && i != num/2  && j!= num/2)
            {
                cout<<"\\";

            }
            else if ( i == num/2  && j == num/2)
            {
                cout<<"X";

            }
            else if( j!= num/2 && i ==((num -1)-j) )
            {
                cout<<"/";
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
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
