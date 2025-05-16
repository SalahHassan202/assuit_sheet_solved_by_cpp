// U. Straight Line
#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long x1 , y1 , x2 ,  y2 , x3 , y3 ;
	cin>>x1 >> y1 >> x2 >> y2 >> x3 >> y3  ;
	long long result1 = (y3 - y2 ) * (x2 - x1) ;
	long long result2 = (y2 - y1 ) * (x3 - x2) ;

	if(result1 == result2 )
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
	return 0;
	
}