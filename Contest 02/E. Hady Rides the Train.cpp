// E. Hady Rides the Train
#include <iostream>
using namespace std;
int main()
{

long long id ;     // id =seet ;
cin>>id ;

long long row = id/4 ;      // int  or long long ===> ignore fractions 
// try to find column .
long long column ;

if (row %2 ==0)
{
    // row is even 
    column = id %4 ;
}
else
{
    // row is odd 
    column = 3-(id %4);
}

cout<< row <<" "<< column <<endl;


    return 0;
}


