//T. Shape2
# include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{

/*

4
   *             =====> 3 space ; 1  *
  ***            =====> 2 space ; 3  *
 *****           =====> 1 space ; 5  *
*******          =====> 0 space ; 7  *     


NOTE ;

space    decrease    ;    * increase
lines =num ;
space =num-1 ;

...........................etc

*/



int num;
cin>>num ;
int spaces =num-1 ;

for(int i=1 ;i<=num ;i++)
{
    for(int j =1 ;j<=spaces ;j++)
    {
        cout<<" ";
    }
    for (int z=1 ;z<i*2 ;z++)
    {
        cout<<"*";
    }
    spaces--;
    cout<<endl;
}


return 0;

}






