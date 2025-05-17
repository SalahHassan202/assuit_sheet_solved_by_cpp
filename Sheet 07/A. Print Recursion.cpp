// A. Print Recursion
#include<iostream>
using namespace std;
void print (int n )
{
    if(n == 0 )
    {
        return;         // if you delet it ====> will make infinite loops
    }
    else
    {
        cout<<"I love Recursion"<<endl;
    }
    print (n-1);                   // return print (n-1);   
}
int main()
{
    long long n ;         cin>>n ;
    print (n);
   

    return 0;
}