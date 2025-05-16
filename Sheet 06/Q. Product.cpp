// T. Circle Task
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int  main()
{
	/*
	give me three number ====> 1  4   5 
	solution is ====>
	1 to 4    is ===> 1   2    3    4   
	1*2 = 2    =====> 2 % 5 = 2            ( THEN TAKE 2 )
	2*3 = 6    =====> 6 % 5 = 1            ( THEN TAKE 1 )
	1*4 = 4    =====> 4 % 5 = 4            the result  is    4 
	
	*/


	long long a , b ,c ;          cin >> a >> b >> c ;
	long long start = min(a , b);
	long long end = max(a , b);
	long long res = 1;

	for(int i = start ; i <= end ; i++)
	{
		res*= i ;
		res%= c ;
	}
	cout<<res<<endl;

	return 0;
}
	