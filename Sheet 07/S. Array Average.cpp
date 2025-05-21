// S. Array Average
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// ******************************* NOTE THAT ***************************************
// GNU C++14 =====> is the Language 
// GNU C++17 =====> dosn't work in this problem 

int size ;        double arr[100];      // First line contains a number N (1≤N≤100) number of elements. ====> given in problem 
double average (int index , double result)
{
    if ( index == size )
    {
        return result / size ;       //  average =  result / size  ;
    }
    return average (index + 1 , result + arr[index]) ;
}

int main()
{
    cin>>size ;

    for(int i =0 ; i<size ; i++)
    {
        cin>> arr[i];
    }

    cout<<fixed <<setprecision(6)<<average(0,0);        // Print the calculated average, with 6 digits after the decimal point.
    // fixed <<setprecision(x)  ====> use library of c++   ====> #include <iomanip>

    return 0;
}