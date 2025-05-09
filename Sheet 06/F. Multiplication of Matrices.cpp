// F. Multiplication of Matrices
#include<iostream>
using namespace std;
int  main()
{
	int row1 , column1 ;
	cin>> row1 >> column1 ;
	int arr1[row1][column1] ;
	for(int i =0 ;i< row1 ; i++)
	{
		for(int j =0 ; j < column1 ; j++)
		{
			cin>>arr1[i][j];
		}
	}

	int row2 , column2 ;
	cin>> row2 >> column2 ;
	int arr2[row2][column2] ;
	for(int i =0 ;i< row2 ; i++)
	{
		for(int j =0 ; j < column2 ; j++)
		{
			cin>>arr2[i][j];
		}
	}
	//   we should make sure that the number of columns in the 1st matrix is equal to the rows in the 2nd matrix. 

	int result[row1][column2];          // arr1 ===>  3 *2   ,,,    arr2 ====>   2 * 3     ,,,     result ====> 3 * 3

 	for(int i=0 ; i < row1 ; i++)
  	{ 
  		for(int j=0 ;j < column2 ; j++)
		{ 
  			result[i][j] =0;          
	  	}      
	}

	for(int i =0 ; i< row1 ; i++)
	{
		for(int j =0 ; j < column2 ; j++)
		{
			for(int z =0 ; z < column1 ; z++)   
			{
				result[i][j]+=  arr1[i][z]  *  arr2[z][j] ;

				// result[0][1] = arr1[0][0] * arr2[0][1];
				// result[0][1] = arr1[0][1] * arr2[1][1];
				// result[0][1] = arr1[0][2] * arr2[2][1];
				// ......................etc.
			}
		}
	}

	for(int i =0 ;i< row1 ; i++)
	{
		for(int j =0 ; j < column2 ; j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
	