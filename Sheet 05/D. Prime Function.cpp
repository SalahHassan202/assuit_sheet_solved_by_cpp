// D. Prime Function
#include<iostream>
#include<cmath>    // sqrt 
using namespace std;

bool primeNumber(int num)
{ 
 int newNumber = sqrt(num);     //  num / 2 ======> time limit
 int flag = 0;

 for(int i = 2 ; i<= newNumber ; i++)
 {
 	if(num % i == 0){
 		flag = 1;
 		break;
	 }
 }
 return flag;
}

int main()
{
	int t ;      // testCases
	cin>>t ;  
	while(t--) 
	{ 
		int num ;
		cin>>num ;

		if(num == 1)
		{
			cout<<"NO"<<endl;
			continue;
		}

		int pr = primeNumber(num);

		if(pr == 1)
		{
			cout<<"NO"<<endl;
		}
		else 
		{
			cout<<"YES"<<endl;
		}
	}


	return 0;
	
}