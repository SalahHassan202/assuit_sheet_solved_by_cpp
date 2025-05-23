// K. Prime Fibonacci
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	/*
	F1=0
	F2=1
	Fn=F(n−1)+F(n−2)
	------------------------------------
	F1 = 0
	F2 = 1
	F3 = F2 + F1 = 1 + 0 = 1
	F4 = F3 + F2 = 1 + 1 = 2
	F5 = F4 + F3 = 2 + 1 = 3 
	F6 = F5 + F4 = 3 + 2 = 5 
	F7 = F6 + F5 = 5 + 3 = 8 
	F8 = F7 + F6 = 8 + 5 = 13 

	///  The list of first 20 terms in the Fibonacci Sequence is:

	///  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181.
	-------------------------------------
	i will suppose prime = 1 , not prime = 0
	0  ====> not prime 
	1  ====> not prime 
	1  ====> not prime 
	2  ====> not prime 
	3  ====>  prime 
	5  ====>  prime 
	8  ====> not prime 
	13 ====>  prime 
	21 ====>  prime 
	34 ====> not prime 
	55 ====> not prime 
	.................etc 

	*/

	//********************* To Solve The Time Limit On Test 3 **************************
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//**********************************************************************************

	bool prime[51] = { 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 1 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 ,
	 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 } ;
	  // prime [51]          ===> given in problem  ====>    50
	int cases , num  ;             cin >> cases ;
	while(cases--)
	{
		cin >> num ;
		if(prime[num] == 1 )
		{
			cout<<"prime\n";
		}
		else
		{
			cout<<"not prime\n";
		}

	}

	return 0;
}