// B. Print
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void print (int num)
{
    for(int i =1 ; i<= num ; i++)
    {
        if( i !=1 )
        {
            cout<<" ";
        }
        cout<<i;
    }
}
int main()
{
    int x ; 
    cin>>x ;
    print(x);

    
  

    return 0;

}