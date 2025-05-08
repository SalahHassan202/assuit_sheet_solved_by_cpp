// C. Sum of Range
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
long long  sumEven(long long  num)
{
	return (num * (num +1) );
}
long long  sumOdd (long long  num)
{
	long long  res = (num+1)/2 ;
	return res*res ;
}
int  main()
{
	long long  num1 , num2 , start =0 , end = 0 ;                   cin>>num1>>num2 ;
	if(num1>=num2)
	{
		start = num2 ;
		end = num1 ;
	}
	else
	{
		start = num1 ;
		end = num2 ;
	}
	long long  resEven = sumEven(end / 2) - sumEven((start - 1)/2 ) ;
	long long  resOdd = sumOdd(end ) - sumOdd(start - 1) ;
	cout<<resEven + resOdd <<endl;
	cout<<resEven<<endl;
	cout<<resOdd<<endl;

	return 0;
}


	