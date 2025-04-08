// U. Float or int
# include <iostream>
using namespace std ;
int main ()
{

double x;        // x is a number 
cin>>x ;

int y =x;
 //cout<<y<<endl;               // give me the integer part of number

double res ;     //result
res =x-y ;      // res  = number -integer part only
 if (res !=0)
 {
    cout<<"float "<<y <<" "<<res <<endl;
 }
 else 
 {
    cout<< "int "<< y <<endl;
 }

    return 0;
}