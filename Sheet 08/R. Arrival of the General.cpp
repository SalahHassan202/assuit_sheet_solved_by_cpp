// R. Arrival of the General
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	/*
	33 44 11 22 
	max = 44      position = 2  ====>  pos ( old ) - pos ( new ) = 2 - 1 = 1        ( one swap )
 	min = 11      position = 3  ====>  size - pos ( new ) = 4 - 3 = 1        ( one swap )
	size = 4  
	==================
	out put = 2 ;

	=========
	NOTE THAT 
	=========

	33 44 44 11 22 
	maxposition = 2 to get the smalest swap

	33 44 11 11 22 
	minposition = 4 to get the smalest swap
	
	*/
	
	int size ;           cin >> size ;
	int num ;
	int max = 0 ;          int maxPosition = 0 ;
	int min = 105 ;       int minPosition = 0 ;

	// int max = 0 ;     int min = 101 ;       =====> given in problem 

	for (int i =1 ; i<= size ; i++)
	{
		cin >> num ;
		if(num > max)
		{
			max = num ;
			maxPosition = i ;
		}
		if(num <= min)
		{
			min = num ;
			minPosition = i ;
		}
		
	}

	if(maxPosition > minPosition )
	{
		cout<< (maxPosition - 1) + (size- ++minPosition) <<endl;
	}
	else
	{
		cout<< (maxPosition - 1) + (size- minPosition) <<endl;
	}

	return 0;
}