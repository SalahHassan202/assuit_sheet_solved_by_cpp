// X. The maximum path-sum
#include <iostream>
#include <cmath>
using namespace std;
int row , column ;
int arr[10][10] ;       // given in problem =====>  N and M (1 ≤ N , M ≤ 10) N donates number of rows and M donates number of columns.
int max_path ( int start , int end )
{

    if (start == row - 1 && end == column - 1)
    {
        return arr[start][end];
    }
    else if (start == row + 1 ||  end == column + 1)   //    using or ( || )   not using and ( && )
    {
        return -1000000;    // because  i want to return the smallest value to use it in comparing to get the max ,,,, if this value is very small i will get the other value is the big  
    }

    int right = max_path (start , end + 1) ;
    int down = max_path (start + 1 , end ) ;
    return arr[start][end] + max (right , down  );
}
int main ()
{
    /*
        3 3 
        5 2 4
        1 3 5
        9 2 7
  
        row = 3    && column = 3 ;
        arr[3][3];

        the idea of solution 
        try to get the max path dro zer0 index to the last element in array 


        try many times to get this....

        5 + 2 + 3 + 2 + 7 = 19 
        5 + 1 + 3 + 5 + 7 = 21 
        5 + 2 + 4 + 5 + 7 = 23 
        5 + 1 + 9 + 2 + 7 = 24    the max path 

    */
    cin>>row >> column ;
    for(int i =0 ; i< row ; i++)
    {
        for(int j =0 ; j<column ; j++)
        {
            cin>> arr[i][j];
        }
    }

     cout<< max_path ( 0 , 0 ) ;
    return 0;
}