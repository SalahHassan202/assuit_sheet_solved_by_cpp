//  O. Calculator
# include <iostream>
using namespace std ;
int main ()
{

int num1, num2;
char oper;
cin>>num1>>oper>>num2;

switch (oper)
{
  case '+':
  cout<< num1+num2<<endl;
  break;

case '-':
  cout<< num1-num2<<endl;
  break;

case '*':
  cout<< num1*num2<<endl;
  break;

  case '/':
  cout<< num1/num2<<endl;
  break;

}
return 0;

}




  
