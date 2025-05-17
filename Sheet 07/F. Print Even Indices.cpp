// F. Print Even Indices
#include<iostream>
using namespace std;
void print ( int arr[] , int size , int index )
{
    if(index > size -1 )
    {
        return ;
    }
    else
    {
        print (arr , size , index+2);
        cout<<arr[index]<<" ";
        
    }
}

int main()
{
    /*

    7                       ======> size of array 
    1 5 8 2 3 9 11          ======> element of array 
    0 1 2 3 4 5 6           ======> index of array 

    solution is!!!
    print index 0            =====> 1
    then (index 0 ) + 2      =====> 8 
    then (index 2 ) + 2      =====> 3 
    then (index 4 ) + 2      =====> 11

    the result is ====> 1 8 3 11 

    make reverse for the result 

    final result is =====> 11 3 8 1

    */
    int size ;                cin>>size ;
    int arr[size];
    
    for( int i =0 ; i < size ; i++)
    {
        cin>>arr[i];
    }
    print(arr, size , 0);
  
    return 0;
}