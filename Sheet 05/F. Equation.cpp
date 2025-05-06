// F. Equation
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

long long equation(int num1 , int num2)
{
	long long result = 0;
	for(int i=2 ; i<=num2 ; i+=2)
	{ 
		result += pow(num1,i); 
	}
	return result;

}
int main()
{

	int num1,num2;
	cin>>num1>>num2;
	cout<<equation(num1,num2)<<endl;


	return 0;
}