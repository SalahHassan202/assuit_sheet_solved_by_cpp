// S. Search In Matrix
#include <iostream>
using namespace std;
int main()
{
	
	int row , column,search ,flag =0;
	cin>>row>>column ;
	int arr [row][column];

	for(int i =0 ; i<row ;i++)
	{
		for(int j =0 ; j<column ; j++)
		{
			cin>>arr[i][j];
		}
	}
	cin>>search ;
	for(int i =0 ; i<row ;i++)
	{
		for(int j =0 ; j<column ; j++)
		{
			
			if (arr[i][j] == search )
			{
				flag =1;
				break;
			}
		}
	}
	
	if(flag == 1)
	{
		cout<<"will not take number"<<endl;
	}
	else
	{
		cout<<"will take number"<<endl;
	}

	return 0 ;
}