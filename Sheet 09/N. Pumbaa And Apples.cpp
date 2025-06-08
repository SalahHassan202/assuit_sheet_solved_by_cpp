// N. Pumbaa And Apples
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}

int main()
{
    /*
    
    3 3 5
    1 2 3
    4 5 6
    7 8 9
    g 3 2
    r 3 2
    c 2 3
    g 2 2
    g 3 2
    -------------------
    output is 
    8
    9
    6
    -------------------
    solution :: 
    g ===> print 
    r ===> swap raws 
    c ===> swap column 
    --------------------
    3 3 5    ===> two daimential array 3 * 3  && 5 ==> operation ===> g , r ,  c ,  g ,  g .
    1 2 3
    4 5 6
    7 8 9
    g 3 2
    r 3 2
    c 2 3
    g 2 2
    g 3 2
    ----------------------
    g 3 2                 ===>   print 8  
    r 3 2                 ===>   swap row 3 with row 2 
    to be like that 
    1 2 3
    7 8 9
    4 5 6
    g 3 2
    r 3 2
    c 2 3
    g 2 2
    g 3 2
    ==============================
    c 2 3                 ===>   swap column 2 with column 3  
    to be like that 
    1 3 2 
    7 9 8
    4 6 5
    g 3 2
    r 3 2
    c 2 3
    g 2 2
    g 3 2
    ==============================
    g 2 2              ===> 9
    g 3 2              ===> 6
    ==============================
    output is 
    8
    9
    6
    ==============================
    
    
    */
    fast() ;

    int row , column , operation ;           cin >> row >> column >> operation ;
    int arr[row + 1][column + 1] ;        // array start at index 0      ===> put i deal with position so that we say [row + 1][column + 1]

    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= column ; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    int arr_row[row + 1] , arr_column[column + 1] ;
    // array start at index 0      ===> put i deal with position so that we say [row + 1][column + 1]

    for(int i = 1 ; i <= row ; i++)
    {
        arr_row[i] = i ;                  // to make zero index ===> empty 
    }
    for(int i = 1 ; i <= column ; i++)
    {
        arr_column[i] = i ;                  // to make zero index ===> empty 
    }

   
    while(operation--)
    {
        int num1 , num2 ;             char letter ; 
        cin >> letter >> num1 >> num2 ;

        if(letter == 'g')                 //      g ===> print 
        {
            int r = arr_row[num1] ;          
            int c = arr_column[num2] ; 
            cout << arr[r][c] << "\n";      //  endl   ===> \n
        }
        else if(letter == 'r')            //     r ===> swap raws 
        {
            swap(arr_row[num1] , arr_row[num2]) ;
        }
        else if(letter == 'c')            //     c ===> swap column 
        {
          swap(arr_column[num1] , arr_column[num2]) ;

        }


    }
  

    return 0 ;
}