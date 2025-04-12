// H. Data Type Guessing

# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

double n,k,a,s;
cin>>n>>k>>a;

s=(n*k)/a ;         //68.7
long long y =s ;    // 68
double z =s-y ;     //.7


if (z>0 )
{
    cout<<"double"<<endl;
    return 0;
}else 
{
    if (y<=2147483647)
    {
        cout<<"int"<<endl;
    }
    else 
    {
        cout<<"long long"<<endl;
    }
}




 return 0;
}


