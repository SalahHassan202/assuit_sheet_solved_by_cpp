// W. Mirror Array 
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int row , col ;
    cin>>row>>col;

    while(row--)
    {
        int array[col];
        for(int i=0 ;i <col ; i++)
        {
            cin>>array[i];
        }
        for(int i=col-1 ;i>=0 ; i--)
        {
           cout<<array[i]<<" ";
        }
        cout<<endl;
    }


    return 0 ;
}


