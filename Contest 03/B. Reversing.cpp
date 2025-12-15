// B. Reversing

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
      // 7                      ===> size of array 
    // 1 2 0 4 0 5 6          ===> element of array 
    // The operation is at each element that is equal to Zero starting from the beginning of the array-, reverse the order of all elements before it.
    //  2 1 0 4 0 5 6         ====> reverse when see zero 
    // 4 0 1 2 0 5 6          ====> reverse when see zero 
    
    int s ;  // size
    cin>>s ;
    int arr[s];
    for(int i =0 ; i< s ; i++)
    {
        cin>>arr[i];
    }

    for(int i =0 ; i< s ; i++)
    {
        if (arr[i]== 0)
        {
            reverse(arr , arr+i);
        }
    }

    for(int i =0 ; i< s ; i++)
    {
        cout<<arr[i]<<" ";

        // 7
        // 1 2 0 4 0 5 6
        // 4 0 1 2 0 5 6 

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

    return 0;

}
