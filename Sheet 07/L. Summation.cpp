// L. Summation
#include <iostream>
#include <cmath>
using namespace std;

// ******************************* NOTE THAT ***************************************
// GNU C++14 =====> is the Language 
// GNU C++17 =====> dosn't work in this problem

int size;                          // global vairables 
long long sum (long long arr[])
{
	
	if(size == 0)
	{
		return 0;
	}
	else
	{
		return arr[--size] + sum(arr);
	}
	
}
int main()
{
	cin>>size;
	long long arr[size];

	for(int i=0 ; i < size ; i++)
	{
		cin>> arr[i];
	}

	cout<<sum(arr);
	
	return 0;

}