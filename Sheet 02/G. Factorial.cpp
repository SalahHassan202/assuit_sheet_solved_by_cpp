// G. Factorial
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

int t ;     // t number of cases
cin>>t ; 
 long long fact = 1;  
 while (t --)
 {
    int num ;
    cin>>num;
     for(int i =1; i<=num ;i++)
     {
        fact *= i ;  // fact = fact * i
     }
     cout<<fact<<endl;
     fact =1;        //   to make counter    {  t }    starrt again     

     /*


     input 

      t =2     number of cases 

      5 
      3

      output 
      120 
      720      false        ===> so that we use this       =======>      fact =1; 
     
    */
 }

return 0;

}






