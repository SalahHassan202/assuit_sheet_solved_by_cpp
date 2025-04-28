// U. Is B a subsequence of A 
#include <iostream>
#include <string>
#include <iomanip>                               //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	long long size,sizeSqu;
	cin>>size>>sizeSqu;
	long long a[size];

	for(int i=0;i<size;i++){
		cin>>a[i];
	}

	long long b[sizeSqu];
	for(int i=0;i<sizeSqu;i++){
		cin>>b[i];
	}

	int x = 0;
	int counter = 0;

	for(int i=0;i<size;i++){
	
		if(a[i] ==b[x])
		{
			counter++; 
			x++; 
		}
	}

	if(counter == sizeSqu)
	{
		cout<<"YES"<<endl;
	} 
	else 
	{
		cout<<"NO"<<endl;
	}
	
	return 0;
	
}