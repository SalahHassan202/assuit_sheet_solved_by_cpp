// H. Sorting
#include <iostream>
using namespace std;
int main()
{
 

  int size;
  cin>>size;
  int arr [size];

  for(int i=0 ; i<size ;i++)   
  {
    cin>>arr[i];
  }

 //     ********** the idea of selection sort **********
 
  for(int i=0 ; i<size -1; i++)     // size - 1 =====>  because the last element don't compare with any number
  {
    int myValue =arr[i];
    int flag =0 ;
    int index =0 ;
    for(int z=i+1 ;z<size ;z++)   // z =i+1 =====> index of element 
    {
      if(arr[z]< myValue)
      {
        myValue =  arr[z] ;
        index =z ;   // to get the index of element
        flag =1;   
      }
    }

   if(flag == 1)    //  we use a flag because we use a swap or not on every cycle by for statement
   {
     // swap 
    int temp = arr[i];
    arr[i]= myValue ;
    arr[index]=temp ;
   }


  }

for(int i =0 ; i<size ;i++)
{
  cout<< arr[i]<<" ";
}


    return 0;
}


