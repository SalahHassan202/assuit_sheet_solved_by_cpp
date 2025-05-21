// T. Combination
#include <iostream>
#include <cmath>
using namespace std;
long long fact (long long num1 , long long num2 )
{
   long long res = 1 ;
   long long temp =2 ; 

   for(int i =num2 +1 ; i <= num1 ; i++)   // we start from ( num2 +1 ) to get more simplification (READ ALL COMMENTS )
   {
        res*=i ;

        if(temp <= num1 - num2 && res % temp ==0)
        {
            res/= temp ;
            temp++;
        }
   } 
   return res ;
}

/*
    4   2    =====> num1 = 4   ; num2 = 2

    (4 * 3 *2 *1 ) 
    __________________      == 6

    (2 * 1 ) * (2 *1 )

*/


//  if the two number is 30 and 1 
// 30 * 29 * 28 * 17 *........1 
// very bif number ====> there is no data type can store it 
// so we go to the simplifcation   (التبسيط ) 

int main()
{
    /*
        Combinations :::

        C(n,r) = n C r  =  n! / (r! * (n−r)!

    */

   long long num1 , num2 ;
   cin>>num1 >> num2 ;

   if( num2 > num1)
   {
        cout<< 0 ;
   }
   else
   {
        cout<<fact(num1 , num2);
   }

    
    return 0;
}