// B. Even Numbers
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
int counter;
cin>>counter;
if (counter==1 || counter ==0)
{
    cout<<-1<<endl;
    return 0;
}
for(int i=1 ;i<=counter ;i++)
{
    if(i%2==0)
    {
        cout<<i<<endl;
    }
}

return 0;
}





