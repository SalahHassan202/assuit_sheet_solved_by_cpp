// J. Prime Factors
#include<iostream>
using namespace std;
int main()
{
	long long num; 
	cin >> num ;
	int flag = 0;       //  use it to print (*) between nummbers

	for(int i = 2; i<= num/2 ; i++)             // i =2   ===> // (1) is not prime number 
	{ 
		
		int counter = 0;
		while(num % i == 0)
		{
			counter++; 
			num /= i; 
		}

		if(counter > 0 && flag > 0)
		{
			cout<<"*";
		}

		if(counter > 0)
		{
			cout<<"("<<i<<"^"<<counter<<")";
			flag = 1;
		}

		if(num == 1)       //  (1) is not prime number
		{
			break;
		}

	}

	if(num > 1 && flag)
	{
		cout<<"*";
	}

	if(num > 1)
	{
		cout<<"("<<num<<"^"<<1<<")";
	}

	return 0;
}