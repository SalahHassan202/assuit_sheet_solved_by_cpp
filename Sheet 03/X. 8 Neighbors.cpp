// X. 8 Neighbors
#include<iostream>
using namespace std;
int main()
{

	int row , column ;
	cin>>row>>column ;
	char arr[101][101];
	for(int i =1; i<= row ; i++)     
	{
		for(int j =1 ; j<= column ; j++)
		{
			cin>>arr[i][j];
		}
	}

	int rowIndex , columnIndex ;
	cin >> rowIndex >> columnIndex ;

	if(arr[rowIndex][columnIndex-1]!= '.' 
	 && arr[rowIndex][columnIndex+1]!= '.'
	 && arr[rowIndex-1][columnIndex]!= '.' 
	 && arr[rowIndex+1][columnIndex]!= '.' 
	 && arr[rowIndex-1][columnIndex+1]!= '.' 
	 && arr[rowIndex-1][columnIndex-1]!= '.'
	 && arr[rowIndex+1][columnIndex-1]!= '.' 
	 && arr[rowIndex+1][columnIndex+1]!= '.')
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}



	return 0;
	
}