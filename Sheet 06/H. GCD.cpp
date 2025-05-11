// H. GCD
#include<iostream>
using namespace std;
long long GCD( long long a , long long b)        // GCD is the greatest common divisor of A and B.
{
	while(b!=0)  
	{
		long long temp = a ;
		a = b ; 
		b = temp % a ;
	}
	return a ;         // first number 
}
long long LCM (long long a , long long b)      // LCM is the least common multiple of A and B.
{
	return (a / GCD(a , b) ) * b ;           // law in maths
}
int  main()
{
	long long num1 , num2 ;
	cin>> num1 >> num2 ;
	cout<<GCD(num1 , num2)<<" " << LCM( num1 , num2 )<<endl;
	
	return 0;
}
	