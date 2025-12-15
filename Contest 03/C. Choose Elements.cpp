// C. Choose Elements

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll  size , num1 , sum =0;
    cin>>size>>num1;
    ll  arr[size];
    for(int i =0 ; i<size ;i++)
    {
        cin>>arr[i];
    }
    //  5 0 8 3 4  9
    sort(arr,arr+size);        // sort the array.....       0 3 4 5 8 9
    reverse(arr,arr+size);     // reverse the array ....    9 8 5 4 3 0 
    for(int i =0 ; i<num1 ;i++)
    {
        if(arr[i]<0 )    // if we have a ngative number ....break;   // don't take it with summition to get the maximum summition
        {
            break;
        }
        
        sum+=arr[i];

    }

cout<<sum<<endl;
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


