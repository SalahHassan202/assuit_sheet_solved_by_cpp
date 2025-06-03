// N. Cakeminator
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	/*

	'.' character denotes a cake cell with no evil strawberry;
	'S' character denotes a cake cell with an evil strawberry.
	.............................................................
	input 
	3 4
	S...
	....
	..S.
	.............................................................
	output = 8
	.............................................................
	how......?
	 arr[row] = {0} , arr[column] = {0} ;
	 row = 3     ,    column = 4 
	 ///   {0 , 0 , 0 }    ,,,  {0 , 0 , 0, 0}
	 if the line == S 
	 i will make the index of zero of array == 1
	 ///  {1 , 0 ,0 }
	 .....etc 

	 and i will make a counter to count the strawbery 

	
	*/
	int row , column;
	cin >> row  >> column ;
	int arr1[row] = {0} , arr2[column] = {0} ;
	string s1 ;

	for(int i =0 ; i< row ; i++)
	{
		cin >> s1 ;
		for(int j = 0 ; j < column ; j++)
		{
			if(s1[j] == 'S')      // S ====> strawberry
			{
				arr1[i] = 1 ; 
				arr2[j] = 1 ;
			}
		}

	}

	int counter = 0 ;

	for( int i =0 ; i< row ;i++)
	{
		for ( int j =0 ; j < column ; j++)
		{
			if(arr1[i] == 0 || arr2[j] == 0)
			{
				counter++;
			}
		}
	}

cout<< counter <<endl;


	
	return 0;
}