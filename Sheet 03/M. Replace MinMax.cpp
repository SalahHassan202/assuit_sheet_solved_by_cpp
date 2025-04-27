// M. Replace MinMax
#include <iostream>
using namespace std;
int main()
{
    int size ,min ,max ;
    cin>>size;
    int a[size];

    for(int i=0 ;i<size ; i++)
    {
        cin>>a[i];
    }

     min =a[0];
     max =a[0];

     int minIndex =0 ;
     int maxIndex =0 ;

    for(int i=0 ;i<size ; i++)
    {
       
        if(min>a[i])
        {
            min =a[i];
            minIndex =i ;
        }
       
       if(max<a[i])
       {
            max =a[i];
             maxIndex =i ;
       }
    }

    a[minIndex]=max ;
    a[maxIndex]=min ;


for(int i=0 ;i<size ; i++)
{
    cout<<a[i]<< " ";
}
 
   
    return 0;
}


