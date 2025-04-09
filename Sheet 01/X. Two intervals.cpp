// X. Two intervals
# include <iostream>
using namespace std ;
int main ()
{
int a,b,c,d;         // a,b,c,d   are four numbers
cin>>a>>b>>c>>d;     //  1 3  5 6   ====>   a =1  ,   b = 3   , c=5   , d=6  
  int start , end ;
/*
 1 3   5 6   ==> there is no intersection between them because 
 a =1   < c =5   && a =1   <d =6


 ______________                  a>c    && b>d       |                                            ______________      c> a && d>b
 a           b                                         |                                           a            c
                                                or       |           
                      ______________                     |
                      c            d                   |               ______________
                                                         |               c           d

*/

if((b<c  && b<d)   ||  (a>c && a>d)  )
{
    cout<< -1<<endl;
}
else 
{
    if(a > c)
    {
        start=a;
    }
    else
    {
        start =c;
    }
    if(b>d)
    {
        end=d;
    }
    else 
    {
        end=b;
    }

    cout<< start << " "<<end<<endl;
}



 return 0;

}
