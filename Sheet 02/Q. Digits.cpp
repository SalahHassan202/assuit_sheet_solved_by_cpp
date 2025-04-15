// Q. Digits
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

int c  ;      //    c   ====>  number of test cases  
cin>>c;
for(int i=1 ;i<=c ;i++)
{                                       //with index        0     1      2
    string number;    // string == array of char     123 =[ '1' ,  '2' , '3']
    cin>>number;
    int size =number.size();    ///size 
    for(int j=size-1 ;j>=0 ;j--)
    {
     cout<<number[j]<<" ";
    }
cout<<endl;

}

return 0;

}








