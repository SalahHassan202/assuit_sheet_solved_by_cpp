// A. Square or rectangle
#include <iostream>
using namespace std;
int main()
{
    int cases ;
    cin>>cases;

    while(cases--)
    {
        int num1 , num2 ;
        cin>>num1>>num2 ;

        if(num1 == num2)
        {
            cout<<"Square"<<endl;
        }
        else
        {
            cout<<"Rectangle"<<endl;

        }
    }

    return 0 ;
}


