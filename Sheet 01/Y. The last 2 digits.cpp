// Y. The last 2 digits
# include <iostream>
using namespace std ;
int main ()
{

int num1,num2,num3,num4 ,mul;
cin>>num1>>num2>>num3>>num4;
/*

 mul = num1*num2*num3*num4 ;
cout<<mul<<endl;

every number has a storage of bit is    10^9
mul = 10^9 *10^9 *10^9 *10^9 = 10^36  
 
 10^36   ====>  there is no have a data tybe contain this big value 10^36

so that we go to another method  =====> modulus
*/


//!  to get the first 2 digit we will make   % 100 

num1 %=100;     //?  num1 =num1 %100
num2 %=100;
num3 %=100;
num4 %=100;
  
mul = num1*num2*num3*num4 ; 
 if((mul%100) <=9)
 {
    cout<<"0"<<mul%100<<endl;
 }
 else
 {
     cout<<mul%100<<endl;
 }
 

 return 0;
}
