// A. Drawing Task
#include <iostream>
# include <string >
#include <algorithm>
using namespace std;
int main ()
{
    /*
    input 
    6 6 3
    1 1 2 6 a
    5 1 6 6 c
    2 3 5 4 b
    =======================
    solution and idea 
    6 6 3   =============> 6 * 6 matrix          and 3 lines 
    r1 c1 r2 c2 char (letter)
    1  1  2  6        a 
    5  1  6  6        c
    2  3  5  4        b
    =======================
    matrix 6*6 is 
      1 2 3 4 5 6 
    1 . . . . . . 
    2 . . . . . . 
    3 . . . . . .
    4 . . . . . .
    5 . . . . . . 
    6 . . . . . .
    ========================
    in the first line 
    r1 = 1   r2 =2    c1 = 1   c2 = 6        fill it with letter (a)

    will be the matrix 
    matrix 6*6 is 

      1 2 3 4 5 6 
    1 a a a a a a 
    2 a a a a a a  
    3 . . . . . .
    4 . . . . . .
    5 . . . . . . 
    6 . . . . . .
    ========================

    in the second line 
    r1 = 5   r2 = 6    c1 = 1   c2 = 6        fill it with letter (c)

    will be the matrix 
    matrix 6*6 is 
    
      1 2 3 4 5 6 
    1 a a a a a a 
    2 a a a a a a  
    3 . . . . . .
    4 . . . . . .
    5 c c c c c c 
    6 c c c c c c
    ========================

    in the third line 
    r1 = 2   r2 = 5    c1 = 3   c2 = 4        fill it with letter (b)

     will be the matrix 
    matrix 6*6 is 
    
      1 2 3 4 5 6 
    1 a a a a a a 
    2 a a b b a a  
    3 . . b b . .
    4 . . b b . .
    5 c c b b c c 
    6 c c c c c c
    ========================

    the output is 

    a a a a a a 
    a a b b a a  
    . . b b . .
    . . b b . .
    c c b b c c 
    c c c c c c
    ========================

    */

   int row , column , lines ;
   cin >> row >> column >> lines ;
   char arr[row][column] ;

   for(int i = 0 ; i < row ; i++)
   {
        for(int j = 0 ; j < column ; j++)
        {
            arr[i][j] = '.' ;
        }
   }

    while(lines--)
    {
        int r1 , c1 , r2 , c2 ;
        cin >> r1 >> c1 >> r2 >> c2 ;
        char letter ;         cin >> letter ; 

        for(int i = min(r1 , r2) - 1 ; i <= max(r1 , r2) - 1 ; i++)  // min(r1 , r2) - 1   ===> sub 1 from this because i deal with index in array not position of array 
        { // min(r1 , r2) - 1       ===> i used min function to make the start is the latest number and use max to make the end is the largest number 
            for(int j = min(c1 , c2) - 1 ; j <=max(c1 , c2) - 1  ; j++)
            {
                arr[i][j] = letter ;
            }
        }

    }

    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
           cout<<  arr[i][j];
        }
        cout<<endl;
    }
    

    return 0 ;
}