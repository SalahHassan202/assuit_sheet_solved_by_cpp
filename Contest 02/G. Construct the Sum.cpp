// G. Construct the Sum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
int res[1000009];
void solve()
{
    ll counter; 
	cin>>counter;
	ll cou = 0;

	for(int i=0;i<counter;i++)
	{
		ll num1,num2;
		cin>>num1>>num2;

		if(num1*(num1+1) / 2 < num2)    // n*(n+1) / 2    5*(5+1)/2 == 15    5 4 3 2 1
		{
			cout<<-1;
		} else {
			ll sum = 0; 
			
			for(int z=num1;z>=1;z--)
			{

				if(sum+z <= num2)
				{ 
					sum+=z;
					res[cou] = z; 
					cou++; 
				}

				if(sum == num2)
				{
					break;
				}

			}
		}

		for(int x=0;x<cou;x++)
		{ 
			cout<<res[x]<<" ";
		}
		cout<<endl;
		cou = 0;
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
