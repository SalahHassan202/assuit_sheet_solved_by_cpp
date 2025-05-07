// I. Swapping With Matrix
#include<iostream>
using namespace std;
const int s = 500;   
void swapRow (int arr[s][s] , int a , int b , int size)
{
    for(int i =0 ; i< size ; i++)     // for rows ===> swap
    {
        int temp = arr[a][i];
        arr[a][i] = arr[b][i];
        arr[b][i] = temp ;
    }
}

void swapColumn (int arr[s][s] , int a , int b , int size)
{
    for(int i =0 ; i< size ; i++)    // for column ===> swap
    {
        int temp = arr[i][a];
        arr[i][a] = arr[i][b];
        arr[i][b] = temp ;
    }
}

void print (int arr[s][s] , int size)
{
    for(int i=0 ; i< size ; i++)    // print 
    {
        for(int j =0 ; j< size ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
	int size, a,b ;     // three number
    cin>>size>>a>>b;
    int arr[s][s];

    for(int i=0 ; i< size ; i++)
    {
        for(int j =0 ; j< size ; j++)
        {
            cin>>arr[i][j];
        }
    }


    a--;   b--;   // pos = indexOfArray +1 ;   ===> indexOfArray = pos -1 ;

    swapRow(arr, a , b , size);
    swapColumn(arr, a , b , size);
    print(arr, size);

	return 0;
	
}