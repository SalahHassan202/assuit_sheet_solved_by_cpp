// T. Helpful Maths
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{

	/*
	3+2+1         ===> equation 
	steps......
	3 2 1            delete operator 
	1 2 3            sorting 
	1+2+3            new equation 
	print new equation 
	
	
	*/
	string equation ;         cin >> equation ;
	int counter =0 ,  size = (equation.length() / 2 )+1 ;
	int arr[size];
	// delete operator 
	for(int i =0 ; i < equation.size() ; i++)
	{
		if(equation[i] == '+')
		{
			continue ;
		}

		arr[counter] = equation[i] - '0' ;   // ASCII CODE 
		counter++;
	}

	// sorting arr 
	sort (arr , arr+size ) ;

	// put operator agin in the eauation ( new aquation )

	for( int i =0 ; i < size ; i++)
	{
		if(i != 0)
		{
			cout<<"+" ;
		}
		cout<< arr[i];
	}

	return 0 ;
}