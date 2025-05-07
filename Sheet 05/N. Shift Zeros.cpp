// N. Shift Zeros
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int fun(int size )
{
	int counter =0 ;
	for(int i =0 ; i <size ; i++)
	{
		int num ;     cin>>num;
		if(num== 0 )
		{
			counter++ ;
		}
		else
		{
			cout<<num<<" ";
		}
	}

	return counter ;
}
int main ()
{
	int size ;         cin>>size;
	int zeros = fun(size);
	

	for(int i =0 ; i< zeros ; i++)
	{
		cout<<0<<" ";
	}

	return 0;
}