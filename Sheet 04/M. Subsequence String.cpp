// M. Subsequence String
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
   string s1;
   cin>>s1;
   string s2= "hello";     // size of hello is 5    ( five )
   int i = 0 , j = 0 ;
   
   while(true)
   {
    if(i == s1.size()  ||  j == s2.size())    // to stop 
    {
        break;
    }
    
    if(s1[i] == s2[j])
    {
        j++;
    }
    i++;
   }

   if(j == 5 )   // hello == 5 
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
    
    return 0;

}