// I. Divisability
#include<iostream>
using namespace std;
long long sum (long long n)
{
	return n*(n+1)/2;                   // (n*(n+1)/2)  ===> calc the summition from 1 to n ===> if n = 3 ====> (3*(3+1)/2)=6
}
int  main()
{
	long long a , b , c  ;
	cin>>a >> b >>c  ;
	long long z = max(a , b);          // z is the max 
	long long x = min(a , b);          // z is the max 

	// law in the math 
	cout<<(sum(z/c) * c )-(sum((x-1)/c) * c)<<endl;


	return 0;
}
	