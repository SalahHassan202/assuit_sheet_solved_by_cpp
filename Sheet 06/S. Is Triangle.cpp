// S. Is Triangle
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
int  main()
{
	double a , b , c ;            cin>> a >> b >> c ;
	double area = 0.0 ;        // area of triangle
	if((a+b) > c && (a+c) > b && (c+b) > a)
	{
		double p = a + b + c ;           // Perimeter of a Triangle  
		double s = p/2 ;                 //  p/2 is the half of Perimeter of a Triangle 
		cout<<"Valid"<<endl;
		area =sqrt(s*(s-a)*(s-b)*(s-c))  ;        // area of triangle  =====> Area of Triangle with Three Sides (Heron’s Formula)
		cout<<fixed<<setprecision(6)<<area<<endl;
	}
	else
	{
		cout<<"Invalid"<<endl;
	}
	
	return 0;
}
	