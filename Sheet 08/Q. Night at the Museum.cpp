// Q. Night at the Museum
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	
	string word ;                   cin >> word ;
	int start = 97 ;    //  From Assci Code 
	int steps = 0 ;
	for(int i =0 ; i< word.size(); i++)
	{
		int result = abs(word[i]- start );
		if(result >= 13)
		{
			steps+= (26 - result) ;
		}
		else
		{
			steps+= result ;
		}
		start = word[i] ;
	}

	cout << steps <<endl;

	

	return 0;
}