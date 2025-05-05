// X. Comparison
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	
	string value , sub1 = "",sub2 ;
	cin>>value ;  

	string myValue = value;  
	string smallString = value;

	for(int i = 0; i<value.size()-1 ;i++)
	{
		sub1 += value[i]; 
		myValue.erase(0,1);   // split (delete) the first element in string 
		sub2 = myValue;   

		// sorting all strings 
		sort(sub1.begin(),sub1.end()); 
		sort(sub2.begin(),sub2.end());   
		smallString = min(smallString,sub1+sub2);
	}
	cout<<smallString<<endl;

	return 0;
}


	