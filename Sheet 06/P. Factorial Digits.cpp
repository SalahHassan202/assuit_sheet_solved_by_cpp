// P. Factorial Digits
#include<iostream>
#include <cmath>
using namespace std;

int main()
{

	double number , result;
	cin>>number;
	for(int i =2 ; i<=number ; i++)
	{
		 result+= log10(i) ;

	}
	cout<<"Number of digits of "<< number<< "! is "<< (int)result+1 <<endl;

	return 0;
	
}