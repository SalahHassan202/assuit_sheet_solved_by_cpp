// Z. Hard Compare
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
double a,b,c,d ,res1,res2;
cin>> a>>b>>c>>d;

res1=b* log(a);            // 2^3 =8      ====>  log ( 2^3)  = 3* log(2)
res2 =d* log (c) ;         // log (number)   ===> give me a fraction   so that we need to use  double or float 
 if(res1>res2)
 {
    cout<<  "YES"<<endl;
 }
 else if (res1=res2)
 {
    cout<<  "NO"<<endl;
 }
 else 
 {
   cout<<  "NO"<<endl;
 }

 return 0;
}
