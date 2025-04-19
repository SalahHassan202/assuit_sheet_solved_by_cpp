// Y. Easy Fibonacci
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   
 int t ;    // t ===> size 
 cin>>t ;

int first =0, second =1;
if (t == 1)
{
    cout<<first<<endl;
}
else if (t==2)
{
    cout<<first<<" "<<second<<endl;
}
else
{
    cout<<first<<" "<<second <<" ";

    for(int i=2 ; i<t ;i++)
    {
     int res =first + second ;
     cout<<res<<" ";

     first=second;
     second =res ;
    

    }
}

    return 0;
}