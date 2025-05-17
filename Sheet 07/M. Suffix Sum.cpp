// M. Suffix Sum
#include <iostream>
#include <cmath>
using namespace std;

// ******************************* NOTE THAT ***************************************
// GNU C++14 =====> is the Language 
// GNU C++17 =====> dosn't work in this problem

long long  size;                          // global vairables 
long long m ;                           // m is the last number 
long long counter =0 ;
long long suffix_sum (long long arr[])
{
	
	if(counter == m )   // m is the last number 
	{
		return 0;
	}
	else
	{
		counter++ ;
		return arr[--size] + suffix_sum(arr);
	}
	
}
int main()
{
	cin>>size;    
	cin>>m ;         
	long long arr[size];

	for(int i=0 ; i < size ; i++)
	{
		cin>> arr[i];
	}

	cout<<suffix_sum(arr);
	
	return 0;

}