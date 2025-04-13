// D. Fixed Password
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

int pass;   //password
while(true)
{
    cin>>pass;
    if(pass ==1999)
    {
        cout<<"Correct"<<endl;
        break ;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }
}


return 0;
}





