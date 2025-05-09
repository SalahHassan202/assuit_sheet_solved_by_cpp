// D. Xor
#include<iostream>
using namespace std;
int main()
{
	long long  a , b ,q ;
	cin>>a>>b >>q ;
	long long result = q % 3 ;
	if(result == 1)
	{
		cout<< a <<endl;
	}
	else if ( result == 2)
	{
		cout<< b <<endl;
	}
	else
	{
		cout<<(a^b)<<endl;
	}

	return 0;
	
}