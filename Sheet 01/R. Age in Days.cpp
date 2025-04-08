// R. Age in Days
# include <iostream>
using namespace std ;
int main ()
{

int x ;     // x is a person's age (in days)
cin>>x;
 int years= x/365 ; 
 cout<<years<<" "<<"years"<<endl;

 x-= 365*years;                      // x=x-365*years;
 int months = x/30 ;
 cout<<months<<" "<<"months"<<endl;
    
  x-=30*months;                     // x=x-30*months;
 int days =x;
  cout<<days<<" "<<"days"<<endl;


return 0;
}





  
