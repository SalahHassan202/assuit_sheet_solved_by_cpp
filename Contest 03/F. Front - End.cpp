// F. Front - End

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    //5
    // 1 2 3 4 5
    // 1 5 2 4 3 
    // ================== if the size of array is odd or even =================== two cases

    int size;
    cin>>size;
    int arr[size];
    for(int i =0 ; i<size ; i++)
    {
        cin>>arr[i];
    }

    for(int i =0 ; i<size/2 ; i++)
    {
        cout<<arr[i]<< " " << arr[size-i-1]<<" ";
    }

    if(size %2 != 0 )   // odd number   //  if the number is even not excute this if condition 
    {
        cout<<arr[size /2 ]<<" ";
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


