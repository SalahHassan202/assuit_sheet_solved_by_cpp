// C. Koko And The Transformation
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	long long  size1 , size2 ;        cin>> size1 >> size2 ;
	long long res1 =0 , res2 =0 ;
	long long  arr1[size1];
	long long  arr2[size2];

	for(int i =0 ; i< size1 ; i++)
	{
		cin >>arr1[i];
	}

	for(int i =0 ; i< size2 ; i++)
	{
		cin >>arr2[i];
	}

	for(int i =0 ; i< size1 ; i++)
	{
		res1+=arr1[i];
	}
	
	for(int i =0 ; i< size2 ; i++)
	{
		res2+=arr2[i];
	}

	if(res1 == res2 )
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	
	

	return 0;
}