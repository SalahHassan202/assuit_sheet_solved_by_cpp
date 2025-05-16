// Z. Geometry Test
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include <limits.h>
using namespace std;
int  main()
{
	int r , s ;    // r ===> radius of a circle  && s ====>the side length of a square ;
	cin>> r >> s ; 
	int rr = r*2 ;

	if(s > rr)
	{
		cout<<"Square"<<endl;
	}
	else if(rr > sqrt (pow(s ,2 ) + pow(s ,2 )))
	{
		cout<<"Circle"<<endl;
	}
	else
	{
		cout<<"Complex"<<endl;
	}


	return 0;
}
	