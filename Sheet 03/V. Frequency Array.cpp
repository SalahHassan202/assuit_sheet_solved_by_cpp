// V. Frequency Array
#include<iostream>
using namespace std;

int main()
{

	// Frequency Array not start from index 0 but start from index 1;

	int size,times;
	cin>>size>>times;

	long long  arr[1000009]={0};   // size of array   10 ^5 == 100000  ;
	for(int i=0 ; i<size ; i++)
	{
		int num ; 
		cin>>num ;
		if(arr[num]==0)
		{
			arr[num]=1 ;
		}
		else
		{
			arr[num]+=1 ;   // arr[num]= arr[num] +1 ;
		}
	}
    
	for(int i =1 ; i <=times ; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
	
}