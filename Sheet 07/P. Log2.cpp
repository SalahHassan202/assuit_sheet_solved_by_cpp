// P. Log2
#include <iostream>
#include <cmath>
using namespace std;
long long counter =0 ;
void log ( long long num)
{
    if( num == 1)
    {
        return ;
    }
    counter++;
    return log(num/2);
}

int main()
{
    /*

    the idea of solution :::::
    make a counter count how times the number dicvide by 2 

    8 ======> number 
    8/2 = 4            ====> counter = 1 ;
    4/2 = 2           ====> counter = 1 ;
    2/2 = 1            ====> counter = 1 ;

    if number ==1         =====> retutn 
    
    
    */
    
    
    long long number ;
    cin>> number ;
    log(number);
    cout<<counter ;
    
    return 0;

}