// Y. Range sum query
#include<iostream>
using namespace std;
int main()
{

	/*
	the idea of problem :::

	1 2 3 4 5 6 ====> position
	6 4 2 7 2 7 ====> array 


	position            index          sum of all element - index[0]of array that taken by user = (number)+ index[0]of array that taken by use = sum 
	1 3            =====> 0 2     ====> 12 - 6 = 6 + 6 =12  	
	
	3 6            =====> 2 5     ====> 28  - 12 = 16 + 2 =18  	

	1 6            =====> 0 5     ====> 28 - 6 = 22 + 6 =28 	
	
	*/

	long long size , range ;
	cin>>size>>range;
	long long arr1[size];   
	long long arr2[size];
	for(int i =0 ;i <size ;i++)
	{
		cin>>arr1[i];
		if(i ==0 )
		{
			arr2[i]= arr1[i];
		}
		else
		{
			arr2[i]= arr1[i]+arr2[i-1];
		}
	}

	while(range--)
	{
		long long start , end , sum =0 ;
		cin>>start>>end ;
		start--;
		end--;
		sum = arr2[end]-arr2[start]+arr1[start];
		cout<<sum<<endl;
		
	}

	return 0;
	
}