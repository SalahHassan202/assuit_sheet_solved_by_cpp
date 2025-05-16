// Y. Common Area
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include <limits.h>
using namespace std;
int  main()
{
	int t ;    // number of testCases 
	cin>>t ;
	int counter =1 ;
	while (counter <=t)
	{
		int numberOfRectangle ;
		cin>>numberOfRectangle ;
		long long  x1 , y1 , x2 , y2  , max_x , min_x , max_y , min_y ;
		cin>>x1 >> y1 >> x2 >> y2 ;

		max_x = x1 , min_x =x2 , max_y = y1 , min_y =y2 ;  

		for(int i =1 ; i< numberOfRectangle ; i++ )
		{
			cin>>x1 >> y1 >> x2 >> y2 ;

			max_x = max(max_x , x1) ;
			min_x = min(min_x , x2) ;

			max_y = max(max_y , y1) ;
			min_y = min(min_y , y2) ;

		}
		if(min_x > max_x && min_y > max_y )   // to find the common area shared between all rectangles.
		{
			cout<<"Case #"<<counter<<": " <<((min_x - max_x) *(min_y - max_y))<<endl;
		}
		else
		{
			cout<<"Case #"<<counter<<": " <<0<<endl;
		}

		counter++;
	}


	return 0;
}
	