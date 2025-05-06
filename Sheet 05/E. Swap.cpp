// E. Swap
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void swap (int x , int y )
{
	int temp ;
	temp =x ;
	x =y ; 
	y = temp ;

}

int main()
{
	int x,y ;
	cin>>x>>y ;
	swap(x,y) ;
	cout<<y<<" "<<x <<endl;

	

	return 0;
}