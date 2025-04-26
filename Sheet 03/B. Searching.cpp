// B. Searching
#include <iostream>
using namespace std;
int main()
{

int size , flag =0;
cin>>size;
int arr[size];

for(int i=0 ; i<size;i++)
{
  cin>>arr[i];

}

int search ;
cin>>search;
for(int i=0 ; i<size;i++)
{
    if(search == arr[i])
{
    cout <<i<<endl;
    flag =1;
    break ;
}

}
if(flag == 0)
{
    cout<<-1<<endl;
}

    return 0;
}
