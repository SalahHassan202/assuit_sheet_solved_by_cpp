// K. Max Number
#include<iostream>
#include <cmath>
using namespace std;

// ******************************* NOTE THAT ***************************************
// GNU C++14 =====> is the Language 
// GNU C++17 =====> dosn't work in this problem

int size;                      // global variable 
int mx = -(1e9+2);             // -10^9    the min element ======> //    N numbers ( - 109 ≤ Ai ≤ 109).

void max(int arr[])
{
	if(size == 0)
	{
		return;
	}
	
	mx = max(mx,arr[--size]);  // --size ====> size -1 ;
	max(arr); 
	
}

int main()
{
	cin>>size;
	int arr[size];

	for(int i=0 ; i < size ; i++)
	{
		cin>> arr[i];
	}

	max(arr);
	cout<<mx;

	return 0;
}