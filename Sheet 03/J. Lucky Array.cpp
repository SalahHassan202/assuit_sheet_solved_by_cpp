// J. Lucky Array
#include <iostream>
using namespace std;
int main()
{
  
int size ;
cin>>size;

int arr[size];

for(int i =0 ;i<size; i++)
{
  cin>>arr[i];
}
int min = arr[0];
int counter =0 ;

for(int i =0 ;i<size; i++)
{

if(min == arr[i])
{
  counter++ ;
}

if(min > arr[i])
{
  min=arr[i];
  counter =1 ; ;   // counter ++;
}


}

if(counter % 2 == 0)
{
  cout<<"Unlucky"<<endl;     // even   ====>  minimum element is even
}
else
{
  cout<<"Lucky"<<endl;     // odd   ===>    minimum element is odd 
}

    return 0;
}


