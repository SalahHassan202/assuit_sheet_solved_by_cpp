// C. Print from N to 1
#include<iostream>
using namespace std;
 int flag =0 ;                      // false                  // global vairable           
void print (int n )
{
   
    if(n ==0 )
    {
        return ;
    }
    
    if(flag)              // false in the first time 
    {
        cout<<" ";       // print space in  the second turn (time ). but the first turn (time ) print number ;
    }
    
    cout<<n--;    
    flag =1 ;                
    return print (n) ;
}
int main()
{
    long long n ;         cin>>n ;
    print (n);
   

    return 0;
}