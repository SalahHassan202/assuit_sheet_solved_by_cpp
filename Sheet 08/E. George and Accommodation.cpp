// E. George and Accommodation
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{

	/*
	3 =============> number of rooms 
	1 1 =====>   num1 , num2 =====>    the number of people who already live in the i-th room ,   room's capacity. 
	2 2 
	3 5 

	============
	output =1   because >>>>> 5-3 >=2   ### 
	
	*/
	int size ;              cin >> size ;
	int num1 , num2 , counter = 0 ;

	for (int i =0 ; i< size ; i++)
	{
		cin >> num1 >> num2 ;
		if((num2 - num1) >= 2 )
		{
			counter++;
		}
	}

	cout<< counter <<endl;

	return 0;
}