// M. Distinct Numbers
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int count(int arr[] , int size)
{
	int counter = 0;
	for(int i =0 ; i<size ; i++)
	{
		if(arr[i] != arr[i+1])
		{
			counter++;
			
		}
	}
	return counter;

}

int main ()
{
	int size ;      cin>>size ;
	int arr[size];
	for(int i =0 ; i<size ; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+size );

	
cout<<count(arr, size)<<endl;

	return 0;
}