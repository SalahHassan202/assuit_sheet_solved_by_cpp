// R. Distance points
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
int  main()
{
	double x1 , y1 , x2 , y2 ,  distance=0.0 ;
	cin>> x1 >> y1 >> x2 >> y2 ;
 	distance = sqrt(pow((x2 - x1 ),2 )+ pow ( (y2 - y1) , 2) ) ;
	cout<<fixed << setprecision(9)<<distance <<endl;

	return 0;
}
	