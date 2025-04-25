// F. Break Number
#include <iostream>
using namespace std;
int main()
{

long long cases , result=0  ;
cin>>cases;
for(int i=1 ; i<=cases ;i++)
{
    long long value ;
    cin>>value;

    int counter=0 ;
    
    if(value % 2 !=0)
    {
        counter=0;
    }
    else
    {
        while(value >0)
        {
            if(value %2 !=0)
            {
                break;
            }
            else
            {
               counter++;
               value/=2;
            }
        }
    }
    if( counter > result)
    {
        result = counter;
    }
    
}

    
cout<<result<<endl;


    return 0;
}


