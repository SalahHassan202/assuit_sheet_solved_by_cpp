// O. Fibonacci
#include<iostream>
using namespace std;
int fibonacci ( int num)
{
    if(num==1)
    {
        return 0 ;
    }
    else if (num == 2)
    {
        return 1 ;
    }
    else
    {
        return fibonacci(num -1 ) + fibonacci (num - 2);
    }
}

int main()
{

    /*
        Fibonacci Sequence

    The Fibonacci Sequence is the series of numbers:

   ///   Fibonacci=====>    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
   ///        index====>    0, 1, 2, 3, 4, 5, 6,  7,   8, 9, ...

    The next number is found by adding up the two numbers before it:

    the 2 is found by adding the two numbers before it (1+1),
    the 3 is found by adding the two numbers before it (1+2),
    the 5 is (2+3),
    and so on!
    

    
    */
    int n ;         cin>>n ;
    cout<< fibonacci(n)<<endl;
   

    return 0;
}