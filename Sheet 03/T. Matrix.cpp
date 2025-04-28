// T. Matrix
#include <iostream>
using namespace std;
int main()
{
	long long  size;
	cin>>size;
	long long  arr[size][size];

	for(int i =0 ; i<size ;i++)
	{
		for(int j =0 ;j<size ;j++)
		{
			cin>>arr[i][j];
		}
	}

long long sum1 =0 ;
long long sum2 =0 ;

	for(int i =0 ; i<size ;i++)
	{
		for(int j =0 ;j<size ;j++)
		{
			if(i == j)
			{
				sum1+=arr[i][j];
			}
			if(size -1 -j == i)
			{
				sum2+=arr[i][j];
			}
		}


	}
cout<<abs(sum1-sum2)<<endl;
	return 0 ;
}