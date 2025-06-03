// M. The New Year Meeting Friends
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	/*
	
	7 1 4
	output is 6 
	------------
	sort ====> 1 4 7 
	7-1 = 6
	==============================================
	30 20 10
	output is 20 
	------------
	sort =====> 30 20 10 
	30 - 10 = 20
	
	*/


	int x1 ;            
	int arr[3];
	for(int i =0 ; i < 3 ; i++)
	{
		cin>> arr[i];
	}
	sort(arr , arr+3) ;

	for(int i =0 ; i < 3 ; i++)
	{
		x1 = arr[2] - arr[0] ;
		
	}

	cout<< (x1)<< endl;

	return 0;
}