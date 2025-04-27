// Q. Count Subarrays
#include <iostream>
using namespace std;
int main()
{
	/*
	1 4 2 3 5 
	 the number of sub-arrays which are non-decreasing.   == 9 
	 [1] , [1,4] , [4] , [2] , [3] , [5] , [2,3] , [3,5] , [2,3,5]
	...............etc 
	*/
	int testCases;
	cin>>testCases;

	while(testCases--)
	{
		int size , result = 0  , i =0 , j =0 ;
		cin>>size;
		int arr[size];

		for(int i =0 ; i<size ;i++)
		{
			cin>>arr[i];
		}
		
		 result = size ;  // size of array 
		while (true)
		{
			if(j == size -1)
			{
				break;
			}

			if(arr[i]>arr[i+1])
			{
				j++;
				i=j;
				continue;
			}
			result++;
			i++;
			
			if(i == size -1)
			{
				
				j++;
				i=j;
			}
			
		}
		cout<<result<<endl;
	}



	return 0 ;
}