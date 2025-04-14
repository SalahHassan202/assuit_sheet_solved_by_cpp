// L. GCD
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{


int num1 , num2 ;    // suppose   that num 1 is the greater than num2
cin>>num1>>num2 ;
int min ,max ;
int GCD ;      //  the greatest common divisor

if(num2 > num1)
{
    max = num2;
    min = num1 ;
}
else
{
    max = num1;
    min = num2 ;
}

for (int i =1 ; i<=max ;i++)
{
    if (num1 % i ==0  && num2 % i ==0)
    {
       GCD =i ;
    }
    
}
cout<<GCD<<endl;

return 0;

}






