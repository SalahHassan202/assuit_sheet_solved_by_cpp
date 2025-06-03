// X. Panoramix's Prediction
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// check for the number isPrime or no 
bool isPrime(int num)
{
    // if(num == 0 || num == 1) 
    // {
    //     return false ;
    // }

    for(int i = 2 ; i<= num / 2 ; i++ )
    {
        if(num % i == 0)
        {
            return false ;
        }
    }

    return true ;
}

// check for the nextPrime 
int nextPrime (int num )
{
    // if(num <= 1) 
    // {
    //     return 2 ;
    // }
    bool found = false ;
    int primeNumber = num ;

    while(!found)       // true 
    {
        primeNumber++;
        if(isPrime(primeNumber))
        {
            found = true ;
        }
    }

    return primeNumber ;
}
int main()
{
    int num1 , num2 ;                    cin >> num1 >> num2 ;
    // There are 15 prime numbers from 1 to 50. They are 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47.

    if(nextPrime(num1) == num2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    
    return 0;
}