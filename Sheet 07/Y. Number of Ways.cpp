// Y. Number of Ways
#include <iostream>
#include <cmath>
using namespace std;
int num1 , num2; 

int way (int number)
{

	if(number >= num2)
    {
		return number == num2;    // number == num2 ====> return num2 
	}

	return way(number+1) + way(number+2) + way(number+3);
}
int main ()
{
    /*
    2   5    ====>   num1  ,    num2 
    There are 4 ways to reach from point 2 to point 5 
    as follows:
    [2, 3, 4, 5],
    [2, 3, 5], 
    [2, 4, 5] 
    and [2, 5].
    .........................................................
     you can move either 1 step, 2 steps or 3 steps at a time.
    ..........................................................
    
    */

    cin >> num1 >> num2;
    cout << way(num1);	


    
    return 0;
}