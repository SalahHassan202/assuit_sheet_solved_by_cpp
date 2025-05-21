// W. Reach Value
#include <iostream>
#include <cmath>
using namespace std;
long long value ;    // input it by the user by   (cin statement)
bool reach_value (long long num) // num ===>  Initially you have a value equal 1 ===> given in problem 
{
    if(value < num)
    {
        return false ;
    }
    else if (value == num)
    {
        return true ;
    }
    else                      // (value > num)
    {
        return reach_value(num * 10 ) || reach_value(num * 20 );   //  or statement (  ||  ) ====> will excute when any condition is true.
    }
}
int main ()
{
    long long testCases ;
    cin>>testCases ;
    while(testCases--)
    {
        cin>>value ;
        bool flag = reach_value(1);         //  Initially you have a value equal 1 ===> given in problem
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }


    return 0;
}