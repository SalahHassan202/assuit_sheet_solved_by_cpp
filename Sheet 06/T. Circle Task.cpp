// T. Circle Task
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
int  main()
{
	double x , y , r ,n , x1 , y1 , distance ;     //  (x , y ) ===>is the center of the circle  &&  r ===> redius of the circle   && n ===> number of points coordinates
	cin>>x>> y >> r >> n ;
	while (n--)
	{
		cin>>x1 >> y1 ;
		distance = sqrt(pow((x1 - x ), 2 )+ pow((y1 - y) , 2));

		if(distance <= r)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}
	