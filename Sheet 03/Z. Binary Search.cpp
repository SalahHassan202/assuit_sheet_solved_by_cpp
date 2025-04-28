// Z. Binary Search
#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch (int arr[], int left , int right, int search)
{
	while(left <= right )
	{
		int mid = left + (right - left) /2 ;

		if (arr[mid]==search)
		{
			return mid ;   // index 
		}
		else if (arr[mid] < search)
		{
			left = mid +1 ;
		}
		else
		{
			right = mid -1 ;
		}

	}
	return -1 ;
}
int main()
{

	int size , search , testCases;
	cin>>size >>testCases;

	int arr[size];

	for(int i =0 ; i<size ; i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+size) ;      // Binary Search should make the array in order  

	while (testCases--)
	{
		cin>>search ;

		long long result = binarySearch(arr, 0 , size -1 , search ) ;

		if(result == -1 )
		{
			cout<<"not found"<<endl;
		}
		else
		{
			cout<<"found"<<endl;
		}
	
	}


	return 0;
	
}