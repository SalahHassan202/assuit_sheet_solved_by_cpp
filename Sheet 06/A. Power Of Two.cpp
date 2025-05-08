// A. Power Of Two
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	long long num;
	cin>>num;
	double res = log2(num)/log2(2);
	

	if((res - (long long)res) != 0)
	{
		cout<<"NO"<<endl;
	} else 
	{
		cout<<"YES"<<endl;
	}

	return 0;
}