// H. One Prime
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

/*
prime number =====>A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.
prime number divisible only by 1 and itself.
Be careful that 1 is not prime .

2
2>1
2/1 =2      2/2=1
.............................
3      
3>1
3/1=3       3/3 =1
.............................
5
5>1
5/1=5       5/5=1
.............................         etc......


*/

int num ,div, flag =0;
cin>>num;     //40
div=num/2;    //20
for(int i=2 ;i<=div ; i++)     // i=2  because the divide by 1 equal 1
{
    if(num % i==0)
    {
        cout<<"NO"<<endl;
        flag =1;
        break;
    }
    
}
if (flag ==0)
{
    cout<<"YES"<<endl;
}

return 0;

}






