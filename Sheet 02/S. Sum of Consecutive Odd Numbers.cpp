// S. Sum of Consecutive Odd Numbers
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
int counter;
cin>>counter ;

while(counter--)
{
    int num1,num2 , max=0 , min=0 ,sum=0;
    cin>>num1>>num2;


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

    for(int i=min+1 ; i<= max-1 ;i++)
    {
        if (i %2 !=0)    // odd number
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
}




return 0;

}








