// N. Sum of a Matrix
#include <iostream>
#include <cmath>
using namespace std;

int row , column ;          // global variables
int arr1[100][100] ; int arr2[100][100] ; int res[100][100];        // [100][100]    ====> given in problem in description of problem 

void sum_array (int r , int c )    //  r , c =====>  row , column that i make it like a pointer to refer to the array 
{
   if(r == row || c == column)
   {
        return;
   }

   if (c < column -1)       //   ( column -1 ) =====>  because array start from index 0 
   {
        sum_array(r , c+1);   // row is contstant and column is change 
   }
   else
   {
        sum_array(r+1 ,0) ;   // row is change and column is change too;
   }

    res[r][c] = arr1[r][c] + arr2[r][c] ;
}

int main()
{
    
    cin>> row >> column ;
    // array 1
    for( int i =0 ; i < row ; i++)
    {
        for ( int j =0 ; j < column ; j++)
        {
            cin>> arr1[i][j];
        }
    }
    // array 2
    for( int i =0 ; i < row ; i++)
    {
        for ( int j =0 ; j < column ; j++)
        {
            cin>> arr2[i][j];
        }
    }
    sum_array(0,0);
    // result
    for( int i =0 ; i < row ; i++)
    {
        for ( int j =0 ; j < column ; j++)
        {
            cout<<res[i][j]<< " ";
        }
        cout<<endl;
    }
    
    
    return 0;

}