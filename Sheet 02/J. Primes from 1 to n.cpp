// J. Primes from 1 to n
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{


int num ;
cin>>num;
for(int i=2 ;i<=num ;i++)    //2  3  4  5  6  7  8  9  10  .....etc
{
    int prime =0;      // flag
    for (int j =2 ;j<i ; j++)
    {
        if(i % j ==0)
        {
            prime =1;
            break;
        }

    }
    if (prime ==0)
    {
        cout <<i<<" ";
    }

}




return 0;

}






