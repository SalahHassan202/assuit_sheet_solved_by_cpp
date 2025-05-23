// H. Presents
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	/*
	
	=====> wants to know for each friend i the number of a friend who has given him a gift.
	
	4              ===> number of people 

	2 3 4 1        ===> the number of a friend who gave a gift to friend number i
	output  
	4 1 2 3       

	solution ====> make frequancy array 
	start from one to four 
	1 2 3 4 
	put the number entered by user  2 3 4 1  

	arr[1] = 2     ====> arr[i] = value ;
	arr[2] = 3
	arr[3] = 4
	arr[4] = 1
	
	=================
	make frequancy array 

	arr[2] = 1    ====> arr[value] = i ;
	arr[3] = 2
	arr[4] = 3
	arr[1] = 4

	=================
	output is 
	cout<<arr[i]<<" " ;

	4 1 2 3 
	

	*/

	int size ;          cin >> size ;
	int arr[size];
	for(int i =1 ; i <= size ; i++)
	{
		// make frequancy array 
		int value ;      cin >> value ;
		arr[value] = i ;
	}

	for( int i =1 ; i<= size ; i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}