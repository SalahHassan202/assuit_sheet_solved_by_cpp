// K. Combination and Permutation
#include<iostream>
using namespace std;
long long factorial(long long a )        // a ====> number 
{
	long long counter =1 , result =1 ;
	while (counter <= a )           // true 
	{
		result *= counter ;
		counter++;
	}
	return result ;

}
int  main()
{

	/*
	
	nCr = n!/[r! (n-r)!]       // NCR is the Combination.
	nPr = (n!) / (n-r)!       // NPR is the Permutation.
	
	*/
	long long num1 , num2  ;
	cin>> num1 >> num2 ;
	cout<<factorial(num1) / ( factorial(num1 - num2 ) * factorial(num2)) <<" ";
	cout<<factorial(num1) /  factorial(num1 - num2 ) <<endl;
	
	
	return 0;
}
	