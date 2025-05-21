// Q. 3n + 1 sequence
#include <iostream>
#include <cmath>
using namespace std;
long long counter =0 ;
void check (long long num)
{
    counter++;
    if (num == 1 )
    {
        return ;
    }

    if( num % 2 == 0)
    {
        check(num / 2);
    }
    else
    {
        check(3*num + 1);

    }
}

int main()
{
    /*
    the idea of solution is :::::
    3 ================> input 

    odd  ===>  3n+1
    even ===> n/2 

    solution 
    input = 3 ====> odd ====> sub in 3n+1
    3*3+1 =  10 
    ............................ counter =1 ;
    10 ====> even =====> sub in 2n 
    10/2 =5 
    ............................ counter =2 ;    
    5 ====> odd =====> sub in 3n+1 
    3*5+1 =16
    ............................ counter =3 ;    
    16====> even =====> sub in 2n 
    16/2 =8
    ............................ counter =4 ;    
    8====> even =====> sub in 2n 
    8/2 =4
    ............................ counter =5 ;    
    4 ====> even =====> sub in 2n 
    4/2 =2
    ............................ counter =6 ;    
    2 ====> even =====> sub in 2n 
    2/2 =1 
    ............................ counter =7 ;    
    1====> odd =====> STOP 
    ............................ counter =8 ;    
    
    
    */

   long long number ;      cin>> number ;
   check(number);

   cout<<counter ;

    
    return 0;

}