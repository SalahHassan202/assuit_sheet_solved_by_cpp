// L. Pascal Triangle
#include<iostream>
using namespace std;
int main()
{
    /*
        ******************* Pascal Triangle *******************
        1                                   ======> (1) line and (1) elment or number
        1 1                                 ======> (2) line and (2) elment or number
        1 2 1                               ======> (3) line and (3) elment or number
        1 3 3 1                             ======> (4) line and (4) elment or number
        1 4 4 4 1                           ======> (5) line and (5) elment or number 
        1 5 5 5 5 1                         ======> (6) line and (6) elment or number
        1 6 6 6 6 6 1                       ======> (7) line and (7) elment or number
        1 7 7 7 7 7 7 1                     ======> (8) line and (8) elment or number
        1 8 8 8 8 8 8 8 1                   ======> (9) line and (9) elment or number
        1 9 9 9 9 9 9 9 9 1                 ======> (10) line and (10) elment or number
         

        solution====> two for statement ====> for { line  }  && for{ number in the last line }
    
    */

   long long line  , my_val ;           cin>> line ;
   // two for statemennt
   
    for(int i =0 ; i< line ; i++)
    {
        my_val = 1 ;
        for(int j =0 ; j<=i ; j++)
        {
            cout<<my_val<<" ";
            my_val = my_val * (i - j) / (j +1);//  from maths..
        }
        cout<<endl;
    }


    return 0;
}