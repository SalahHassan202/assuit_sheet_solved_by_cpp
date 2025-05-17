// E. Base Converssion
#include<iostream>
using namespace std;
void print ( long long num )
{
    if(num ==0 )
    {
        return ;
    }
    else
    {
        print(num /2 );            // 1010
        cout<<num%2;

        /*     if you reverse this line the result is reverse 

        cout<<num%2;                    0101
        print(num /2 );
        
        */
    }

}

int main()
{
    long long testCases , number ;               cin>>testCases;
    while (testCases--)
    {
        cin>>number ;
        print(number);
        cout<<endl;
    }
    
  
    return 0;
}