// V. Creating Expression1
#include <iostream>
#include <cmath>
using namespace std;

// ******************************* NOTE THAT ***************************************
// GNU C++14 =====> is the Language 
// GNU C++17 =====> dosn't work in this problem


int arr[20];         // given in the problem ===>   First line contains two numbers N (1 ≤ N ≤ 20) ;
int size , result ;

bool check (int sum , int index )         // bool ====> True or False =====> YES or NO
{
    if(index == size )
    {
        return sum == result;
    }
    bool case_1 = check (sum + arr[index] , index+1) ;
    bool case_2 = check (sum - arr[index] , index+1) ;
    return case_1 || case_2 ;
}
int main ()
{
    cin>> size >> result ;

    for(int i =0 ; i< size  ; i++)
    {
        cin>>arr[i];
    }

    if(check (arr[0] , 1 ))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}