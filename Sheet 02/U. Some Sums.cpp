// U. Some Sums
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

/*
input 
20 2 5
output
84
how............???????

20      2  5   ======> (2,3,4,5)
1...20   &&    (2,3,4,5)
1 2 3 4 5 6 7 8 9 10 11 12 13 14 14 15 16 17 18 19 20       (2,3,4,5)   
  

print the number between 2 , 5 ==2 3 4 5  &&  the sum of  number that sum of 2 digit =2 or 3 or 4 or 5


solution ......?

2 3 4 5       11 12 13 14 20      =  84    ======> output

*/



/*

if the number one digit 

1/10 = 0.1
2/10 = 0.1
3/10 = 0.1
4/10 = 0.1
5/10 = 0.1
6/10 = 0.1
7/10 = 0.1
8/10 = 0.1
9/10 = 0.1

*/

/*
if the number two digits

16 % 10 = 6      

if the number 3 or 4 or 5 digits or more 

number %10  

*/

int number , range1 ,range2 ;
cin>>number>>range1>>range2;
long long sum =0;

for (int i=0 ; i<=number ;i++)
{
    // if the number one digit or 2 digit or 3 or 4 or more ......etc.
    if(i /10 == 0)
    {
        if(i>=range1 && i<= range2)
        {
            sum+=i ;    // sum=sum+i ;
        }

    }
    else 
        {
        int myNumber =i ;
        int mySum =0;
        while(myNumber)
        {
            int digit =myNumber %10 ;
           
            mySum +=digit ;
            myNumber /=10 ;   // myNumber =myNumber /10 

        }               
        if (mySum>=range1 && mySum<= range2)
        {
           sum+=i ;     // sum=sum+i ;
        }
    

        } 
          

}

cout<<sum<<endl; 


return 0;


}








