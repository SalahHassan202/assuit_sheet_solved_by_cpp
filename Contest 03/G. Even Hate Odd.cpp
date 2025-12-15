// G. Even Hate Odd

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
/*

3            ======> testCases
4            ======> size of array 
1 2 3 4      ======> element of array             &&  2 even   2 odd      ,,,      0 operation to make the even == odd
4
1 1 1 1                                           && 0 even    4 odd         ,,,    2 operation to make the even == odd
3
1 2 3                                             && 1 even    2 odd         ,,,    -1 operation to make the even == odd


*/

    int t;
    cin>>t;
    while (t--)
    {
        int size ,even =0 , odd =0  ;
        cin>>size;
        int arr[size];

        for(int  i =0 ; i<size ; i++)
        {
            cin>>arr[i];
        }
        for(int  i =0 ; i<size ; i++)
        {
            if(arr[i] % 2 ==0 )
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(even == odd )
        {
            cout<< 0 <<endl;
        }
        else if (size % 2 != 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<abs(even - odd) /2 <<endl;
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

