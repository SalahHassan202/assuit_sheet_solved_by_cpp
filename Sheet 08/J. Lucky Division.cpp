// J. Lucky Division
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	// lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not. 

	int luckyNumber[13] ={4 , 7 , 44 , 47 , 74  , 444 , 447 , 474 , 477 , 744 ,  777 , 747 , 774 } ;
	
	int num ;            cin >> num ;
	int flag = 0 ;
	for(int i = 0 ; i < 13  ; i++)
	{
		if(num % luckyNumber[i]  == 0 )
		{
			flag = 1 ;
			break;
		}
		
	}

	if(flag == 1 )
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	

	return 0;
}