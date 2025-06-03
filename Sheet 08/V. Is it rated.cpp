// V. Is it rated
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{


	/*

	6
	3060 3060
	2194 2194
	2876 2903
	2624 2624
	3007 2991
	2884 2884
	------------------
	output
	rated
	===============================================================
	4
	1500 1500
	1300 1300
	1200 1200
	1400 1400
	------------------
	output
	unrated
	===============================================================
	5
	3123 3123
	2777 2777
	2246 2246
	2246 2246
	1699 1699
	------------------
	output
	maybe

	*/
	int size , score1 , score2 , flag1 = 0  , flag2 = 0 , temp = 0 ;                        cin >> size ;
	for(int i =0 ;i < size  ; i++)
	{
		cin >> score1 >> score2 ;
		if( score1 != score2)
		{
			flag1 = 1 ; 
			break ;
		}
		if(temp < score1 && i != 0)
		{
			flag2 = 1 ;
		}
		temp = score1 ;
	}

	if(flag1 == 1)
	{
		cout<<"rated"<<endl;
	}
	else if (flag2 == 1)
	{
		cout <<"unrated"<<endl;
	}
	else
	{
		cout<<"maybe"<<endl;
	}


	return 0;
}