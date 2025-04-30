// F. Way Too Long Words
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t ;
    cin>>t;

    while(t--)
    {
        string value;
        cin>>value;
        int size = value.size();

        if(size <= 10)
        {
             cout<<value<<endl;
        }
        else
        {
            cout<<value[0]<<size-2<<value[size-1]<<endl;
        }
     
        
    }
    

    return 0 ;
}