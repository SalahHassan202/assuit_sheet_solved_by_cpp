// D. Counting Elements

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    int size , temp , result=0 , counter =0;
    cin>>size;
    int arr[size];

    for(int i =0 ; i<size ; i++)
    {
        cin>>arr[i];
    }

    sort(arr , arr+size);

    for(int i =0 ; i<size ; i++)
    {
        if(i == 0)
        {
            temp = arr[i];
            result =1 ;

        }
        else
        {
            if(temp == arr[i])
            {
                result++;
            }
            else if(temp +1 == arr[i])
            {
                counter +=result ;
                temp=arr[i];
                result =1 ;
            }
            else
            {
                result =1 ; 
                temp = arr[i];
            }
        }
    }
    cout<< counter <<endl;
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


