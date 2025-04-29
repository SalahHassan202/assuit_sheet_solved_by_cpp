// E. Alternating Array
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    // 3   ===> size of array 
    // 3 4 2 
    // + - +     ====> one operation.
    // - + -     ====> two operation.


    int size , temp1 =0 , counter1 =0 ,temp2 =0 , counter2 =1 ;
    cin>>size;
    int arr1[size];
    int arr2[size];
    for(int i =0 ;i<size ; i++)
    {
        int num ;
        cin>>num ;
        arr1[i]= num ;
        arr2[i]= num ;
    }
    // counter move from zero to one when make one operation ====> from + to -    vice versa   
    arr2[0]*= -1 ;

    for(int i =0 ;i<size ; i++)
    {
        if(i==0)
        {
            temp1 = arr1[i];
            temp2 = arr2[i];
        }
        else
        {
            if((temp1 > 0 && arr1[i] > 0) || (temp1 < 0 && arr1[i] < 0))
            {
                arr1[i]*= -1 ;
                counter1++;
            }
            if((temp2 > 0 && arr2[i] > 0) || (temp2 < 0 && arr2[i] < 0))
            {
                arr2[i]*= -1 ;
                counter2++;
            }
             temp1 =arr1[i];
            temp2 =arr2[i];
        }
    }
    if(counter1 < counter2)
    {
        cout<<counter1<<endl;
    }
    else
    {
        cout<<counter2<<endl;
    }

    return 0 ;
}


