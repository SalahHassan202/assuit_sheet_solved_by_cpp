// S. Good Number
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
 
	/*
	
	10 6           ==========>   size = 10  ; range is = 6 ===> numbers from (0 to 6 )
	1234560
	1234560
	1234560
	1234560
	1234560
	1234560
	1234560
	1234560
	1234560
	1234560
	=================
	output is 
	10
	
	
	*/
 
	int size  ,  range  , result = 0 ; 
	cin >> size >> range ;
	string myRange = "0123456789" ;
	string num ; 
 
	for( int i =1 ; i<= size ; i++)
	{
		cin >> num ;
		int counter = 0 ;
 
		for( int j = 0 ; j<= range ; j++)
		{
			if(num.find(myRange.substr(j , 1)) != string::npos)
			{
				counter++ ;
			}
		}
 
		if(counter ==(range+1))
		{
			result++;
		}
 
	}
 
	cout<< result;
 
	return 0;
}