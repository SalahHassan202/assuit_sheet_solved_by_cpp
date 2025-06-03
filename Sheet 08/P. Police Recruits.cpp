// P. Police Recruits
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	/*
	3
	-1 -1 1
	-------------
	output 
	2
	-------------
	how....?
	=============
	crimes = 0  , police = 0 ;
	input is 
	-1 -1 1 
	-1 ====> crime 
	1 ====> police 
	i want to calculate  the number of crimes which will go untreated.
	===================================================================
	* 
	-1 -1 1 
	===> 2 crimes 1 police 
	
	*/

	long long events , num ;         cin >> events ;
	long long police = 0 , crimes = 0 ;
	
	for ( int i =0 ; i< events ; i++)
	{
		cin >> num;
		if(num == -1 )
		{
			// we want to check for police ===> to solve the crime.
			if( police > 0 )
			{
				police--;
			}
			else
			{
				crimes++;
			}
		}
		else     // (num == 1) ;
		{
			police+= num ;       // police = police + num ;
		}
	}

	cout<< crimes <<endl ;

	
	return 0;
}