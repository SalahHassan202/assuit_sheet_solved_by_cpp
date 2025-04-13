// E. Max
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

int counter ;
cin>>counter;
int max =0;
for(int i=0 ; i<=counter ; i++)
{
    int num ;
    cin>>num;
     if(i ==0)
     {
        max =num;
     }
     if(num>max)
     {
        max =num ;
     }
}

cout<<max<<endl;
return 0;
}





