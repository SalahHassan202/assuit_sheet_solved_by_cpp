// Q. Coordinates of a Point
# include <iostream>
using namespace std ;
int main ()
{

float num1 ,num2 ;
cin>> num1>>num2;

if(num1>0 && num2>0)
{
  cout<<"Q1"<<endl;
}
else if(num1<0 && num2>0)
{
  cout<<"Q2"<<endl;
}
else if(num1<0 && num2<0)
{
  cout<<"Q3"<<endl;
}
else if(num1>0 && num2<0)
{
    cout<<"Q4"<<endl;
}
else if (num1 ==0 && num2 ==0)
{
cout<< "Origem"<<endl;
}
else if (num1==0 &&num2 !=0)
{
  cout<< "Eixo Y"<<endl;
}
else 
{
  cout<<"Eixo X"<<endl;
}


return 0;
}





  
