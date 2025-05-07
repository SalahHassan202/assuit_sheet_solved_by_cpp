// J. Average
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
double sum (int size )
{
	double arr[size];
	double sum = 0.0 ;
	for(int i =0 ; i< size ;i++)
	{
		cin>>arr[i];
		sum += arr[i];

	}

	return sum ;
}

int main ()
{
	int size ;         cin>>size;
	
	cout <<setprecision(8)<< sum(size) / size << endl ;

	return 0;
}