// D. Print Digits using Recursion
#include<iostream>
using namespace std;
int index =0 ;
void print (string num)
{
    if(index == num.size())
    {
        return ;
    }
    else
    {
        cout<<num[index]<<" ";                          //  cout<<num[index++]<<" ";                    
        index++;
    }
        return print(num);
}
int main()
{
   long long testCases  ;                cin>>testCases ;
   while(testCases--)
   {
         string  number ;
        cin>>number ;
        print (number);
        cout<<endl;
        index =0 ;                   // if you delete it ====> you will get run time error on test 1 ;    ====> it's important
   }

    return 0;
}