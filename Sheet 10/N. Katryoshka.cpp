// N. Katryoshka
#include <iostream>
#include <bits/stdc++.h>

using namespace std ;

int main ()
{

/*

 1. Two eyes and one body.
 2. Two eyes, one mouth, and one body.      
 3. One eye, one mouth, and one body.

 i don't use it ( 2. Two eyes, one mouth, and one body.)   but use this (3. One eye, one mouth, and one body.)
 because this is the same statement with difference in eyes 

*/
long long e , m ,b;   // e ==> eyes   ,   m==> mouths   ,   b ==> bodys
cin>>e>>m>>b ;
long long res =0;   // result 
long long x = min ({e ,m,b});       //  minimum

res+=x ;  //res=res+x

e-=x;    // e=e-x
m-=x;    // m=m-x
b-=x;    // b=b-x

x=min(e/2 , b);
res+=x;   //res=res+x

cout<<res<<endl;

 return 0;
}


