// T. Sort Numbers
# include <iostream>
using namespace std ;
int main ()
{
int a, b, c;    // a,b,c are three numbers
cin>>a>>b>>c;
int max , def, min ;     // maximum ,default and minimum
if (a>=b && a>=c)
{
    max= a;
    if (b>=c)
    {
        def=b;
        min=c;
    }
    else 
    {
        def=c;
        min=b;
    }
}
else if (b>=a && b>=c)
{
    max =b;
     if (c>=a)
    {
        def=c;
        min=a;
    }
     else 
    {
        def=a;
        min=c;
    }
}
else 
{
    max =c;
      if (b>=a)
    {
        def=b;
        min=a;
    }
     else 
    {
        def=a;
        min=b;
    }
  

}

cout<<min<<endl;
cout<<def<<endl;
cout <<max <<endl;
 cout<<endl;
cout << a <<endl;
cout <<b <<endl;
cout << c <<endl;

return 0;

}


