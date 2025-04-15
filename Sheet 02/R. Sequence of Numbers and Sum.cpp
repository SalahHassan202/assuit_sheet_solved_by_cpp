// R. Sequence of Numbers and Sum
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{



int num1,num2 ,sum=0;
while(cin>>num1>>num2)
{ int min , max;
    if(num1<=0 || num2<=0)
    {
        return 0;
    }


    if(num1>=num2)
    {
        max=num1;
        min=num2;
    }
    else
    {
        max=num2;
        min=num1;
    }

for (int i=min ;i<=max ;i++)
{
    cout<<i<<" ";
    sum+=i;
}
cout <<"sum ="<<sum <<endl;
sum=0;     // to make the sum =0 in each time 
}


return 0;

}








