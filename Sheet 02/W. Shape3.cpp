// W. Shape3
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
 
/*
 
4
   *             =====> 3 space ; 1  *
  ***            =====> 2 space ; 3  *
 *****           =====> 1 space ; 5  *
*******          =====> 0 space ; 7  *  
 
 
*******          =====> 0 space ; 7  *   
 *****           =====> 1 space ; 5  *  
  ***            =====> 2 space ; 3  *
   *             =====> 3 space ; 1  *
 
 
 
NOTE ;
 
space    decrease    ;    * increase
lines =num ;
space =num-1 ;
 
...........................etc
 
*/
 
 
 
 
//! to make triangle
 
/*
 
   *
  ***
 *****
*******
 
*/
 
 
int num;     //num = lines ;
cin>>num ;
int spaces =num-1 ;
 
for(int i=1 ;i<=num ;i++)
{
    for(int j =1 ;j<=spaces ;j++)
    {
        cout<<" ";
    }
    for (int z=1 ;z<i*2 ;z++)
    {
        cout<<"*";
    }
    spaces--;
    cout<<endl;
}
 
 
//! to make triangle reverse 
 
 
/*
 
*******
 *****
  ***
   *
    
*/
int spaces1 =1;
 
for(int i=num ;i>=1 ;i--)
{
    for(int j =1 ;j<spaces1 ;j++)
    {
        cout<<" ";
    }
    for (int z=i*2 ;z>1 ;z--)
    {
        cout<<"*";
    }
    spaces1++;
    cout<<endl;
}
 
 
 
return 0;
 
}
 