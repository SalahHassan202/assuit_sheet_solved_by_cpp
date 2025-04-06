//   H. Two numbers

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
double num1 , num2;
cin>> num1;
cin>> num2 ;
double result =num1/ num2 ;
cout<<"floor "<<num1<<" / "<<num2 << " = "<< floor(result)<<endl;
cout<<"ceil "<<num1<<" / "<<num2  << " = "<< ceil(result)<<endl;
cout<<"round "<<num1<<" / "<<num2  << " = "<<round(result)<<endl;

    return 0;
}