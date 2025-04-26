// A. Summation
#include <iostream>
using namespace std;
int main()
{

int size ;
cin>>size;

int arr[size];
long long sum =0;


while(size--)
{
    int value ;
    cin>>value;
    sum =sum +value;

}

cout<<abs(sum)<<endl;






    return 0;
}
