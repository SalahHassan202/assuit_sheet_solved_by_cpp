// I. Lucky Numbers
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{


string a ;    // "65"     ['6' , '5' ]
cin>>a;    
int num1 =a[0] -'0';
int num2 =a[1] -'0';
//   cout <<a[0]<< "   "<<a[1]<<endl;    ====>    6    5
if(num2 ==0)
{
    cout<<"YES"<<endl;
    return 0;
}   
if (num1% num2 ==0 || num2 %num1 ==0)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

return 0;
}





