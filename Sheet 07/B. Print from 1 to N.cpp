// B. Print from 1 to N
#include<iostream>
using namespace std;
int start =1 ;               // global =====> output 1 2 3 4 5 ===> if n = 5 
void print (int n )
{
    if(n ==0 )
    {
        return ;
    }
    //    int start =1 ;               // local =====> output 1 1 1 1 1  ===> if n = 5 

    cout<<start++ <<endl;               
    return print (n -1) ;
}
int main()
{
    long long n ;         cin>>n ;
    print (n);
   

    return 0;
}