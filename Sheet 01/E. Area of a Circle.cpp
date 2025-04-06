//E. Area of a Circle
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   double PI=3.141592653 ;
   double redius =0.0 ;
    cin >> redius ;
   cout<<fixed << setprecision(9)<< PI * redius * redius <<endl;
    
    return 0;
}