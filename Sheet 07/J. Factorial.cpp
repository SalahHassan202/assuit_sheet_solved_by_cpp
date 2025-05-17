// J. Factorial
#include<iostream>
using namespace std;
long long fact ( long long num)
{
    if(num == 0 || num == 1 )
    {
        return 1;
    }
    else
    {
        return num * fact (num-1);
    }
}
int main()
{

    // fact 4 ====>  4*3*2*1 
    // fact 5 ====> 5*4*3*2*1    ........etc
    
    long long n ;         cin>>n ;
    cout<< fact(n)<<endl;
   

    return 0;
}