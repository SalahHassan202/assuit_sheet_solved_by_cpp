// G. Palindrome Array
#include <iostream>
using namespace std;
int main()
{
  
int size , flag =0;
cin>>size;
int arr[size] ;

for(int i =0 ; i<size ; i++)
{
  cin>>arr[i] ;

}

for(int i=0 ; i<= size/2 ; i++)   // 0 1 2 3 4  ======> midel value in array is size/2 
{
    if(arr[i]!= arr[size-1-i])
    {
      flag =1;
      break ;
    }
}

if (flag == 1)
{
  cout<<"NO"<<endl;
}
else
{
  cout<<"YES"<<endl;
}


    return 0;
}
