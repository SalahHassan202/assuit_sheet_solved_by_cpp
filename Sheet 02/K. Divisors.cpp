//K. Divisors
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

  /*
  6
  6/1   ====>   (Accept the division)     print 1
  6/2    ====>   (Accept the division)     print 12
  6/3     ====>   (Accept the division)     print3
  6/4      ====>   ( Not Accept the division)     print 1
  6/5       ====>   ( Not Accept the division)     print 1
  6/6        ====>   (Accept the division)     print 16
  
  */


int num;
cin>>num;
for(int i=1; i<=num ;i++)
{
    if(num% i ==0)
    {
        cout<<i<<endl;
    }
}


return 0;

}






