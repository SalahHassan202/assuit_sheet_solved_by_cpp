//F. Digits Summation
#include <iostream>

using namespace std;

int main()
{
   long long  N,M ;
   cin>>N>>M;
   int  last_N = N %10;
    int last_M = M %10;
    cout <<  last_N  + last_M <<endl;

    return 0;
}