// D. Counting Elements
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int size , temp , result=0 , counter =0;
    cin>>size;
    int arr[size];

    for(int i =0 ; i<size ; i++)
    {
        cin>>arr[i];
    }

    sort(arr , arr+size);

    for(int i =0 ; i<size ; i++)
    {
        if(i == 0)
        {
            temp = arr[i];
            result =1 ;

        }
        else
        {
            if(temp == arr[i])
            {
                result++;
            }
            else if(temp +1 == arr[i])
            {
                counter +=result ;
                temp=arr[i];
                result =1 ;
            }
            else
            {
                result =1 ; 
                temp = arr[i];
            }
        }
    }
    cout<< counter <<endl;

    return 0 ;
}


