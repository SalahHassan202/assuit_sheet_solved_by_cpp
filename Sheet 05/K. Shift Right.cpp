// K. Shift Right
#include<iostream>
using namespace std;
const int s =10003;
void print (int arr[s] , int size , int shift )
{
	
	for(int i = size - shift ; i<size; i++)
	{
		cout<<arr[i]<<" ";   // the number that we make shift for it .
	}

	for(int i =0 ; i<size  - shift; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int size , times ;
	int arr[s];
	cin>>size>>times;

	for(int i=0 ; i<size ; i++)
	{
		cin>>arr[i];
	}
	int shift = times % size ;

	print(arr , size , shift );
	

	return 0;
	
}