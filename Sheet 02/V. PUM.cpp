// V. PUM
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

int lines;
cin>>lines;
int counter =1;

for (int i=1 ; i<=lines ;i++)
{
    if(counter % 4 == 0)
    {
        counter++;
        cout<<"PUM"<<endl;
        i--;
        
        continue ;
    }
cout<<counter++<<" "<<counter++<<" "<<counter++<<" ";

}

  cout<<"PUM"<<endl;

return 0;

}








