// W. Mathematical Expression
# include <iostream>
using namespace std ;
int main ()
{

int a, b,c;           // three numbers
char s ,q= '=';       // s  ==> (+ , - , *)          q ==>  (=)
cin >>a>>s>>b>>q>>c;
 

if( s == '+')
 {
    if (a+b == c)
    {
     cout<< "Yes"<<endl; 
    }
    

    else 
   {
    cout << a+b <<endl;
   } 
}   
else if( s == '-')
 {
    if (a-b == c)
    {
     cout<< "Yes"<<endl;
    }
    else 
    {
    cout <<a-b <<endl;
    }
 }
   
 else 
 {
   if (a*b == c)
   {
     cout<< "Yes"<<endl;
   }
    else 
   {
    cout << a*b <<endl;
   }
}
  
 return 0;

}
