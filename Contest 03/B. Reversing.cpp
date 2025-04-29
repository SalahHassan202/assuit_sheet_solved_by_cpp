// B. Reversing
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    // 7                      ===> size of array 
    // 1 2 0 4 0 5 6          ===> element of array 
    // The operation is at each element that is equal to Zero starting from the beginning of the array-, reverse the order of all elements before it.
    //  2 1 0 4 0 5 6         ====> reverse when see zero 
    // 4 0 1 2 0 5 6          ====> reverse when see zero 
    
    int size ;
    cin>>size ;
    int arr[size];
    for(int i =0 ; i< size ; i++)
    {
        cin>>arr[i];
    }

    for(int i =0 ; i< size ; i++)
    {
        if (arr[i]== 0)
        {
            reverse(arr , arr+i);
        }
    }

    for(int i =0 ; i< size ; i++)
    {
        cout<<arr[i]<<" ";

        // 7
        // 1 2 0 4 0 5 6
        // 4 0 1 2 0 5 6 

    }

    return 0;
}