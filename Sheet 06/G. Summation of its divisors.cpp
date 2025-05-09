// G. Summation of its divisors
#include<iostream>
#include<cmath>
using namespace std;
int  main()
{
   long long number , res =0 ;     cin>>number ;
   for(int i =1 ; i <= sqrt(number) ; i++)           // condition in for statement is==> // (i< = number/2 )   ====> give time limit
   {
        if(number % i == 0 )
        {
            res+= i ;
            if(i != sqrt(number))
            {
                res+=number/i ;
            }
        }
   }
   cout<<res<<endl;


    return 0 ;
}