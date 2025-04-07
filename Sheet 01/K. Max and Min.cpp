// K. Max and Min

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int a, b,c;   // a , b. c   three number 
cin>>a>>b>>c;
cout<< min( a, min (b,c))<<" "<<max (a, max(b,c))<<endl;
    return 0;
}