// E. Interval Sweep

# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

/*
a   ===>   the number of odd
b    ===>   the number of even


2 5  ==> it means that i have  2 number odd    and    5 number even    ....etc

2  3          (difference is 1 between 2 &3 )   ==>    3-2=1
140 141 142 143 144   ====>   2 odd    &&  3 even      ======> cout<< "YES"<<endl;
  
3  1 
77 78 79 80          ====> 2 odd    &&  2 even    ======> cout<< "NO"<<endl;


*/
int a,b ;
cin >>a>>b;

 if ((a==0 && b==0) || abs (a-b)>=2)
 {
    cout<< "NO"<<endl;
 }
 else 
 {
    cout<< "YES"<<endl;
 }





 return 0;
}


