// E. Maximum Distinct Numbers
#include<iostream>
using namespace std;
int  main()
{
	/*
	15 ====>   take a number by user 
	 solution 

	///   15  (15-1)= 14     (14-2)= 12     (12-3)= 9        (9-4)= 5     (5-5)= 0   
	///    1       2            3                4                5          6          =======>   counter (i)     
	then make a check betwween i (1 , 2, 3, 4, 5 ,6 , ....... )   and the number

	**************************************************************************************

	other example 

	8  ===>  take a number by user 
	/// 8     (8-1) = 7         (7-2) = 5         (5-3)= 2 
	/// 1        2                3                  4            =======>   counter (i)     
	
	*/


	long long n ;       // number 
	cin>> n ;
	for(long long i =1 ;   ;   i++)    // no condition 
	{
		if(i> n)
		{
			cout<<i-1<<endl;
			return 0;
		}
		else
		{
			n-=i ;
		}

	}




	return 0;
}
	