// D. Strings
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
 
int main()
{
   string s1, s2 ;
   cin>>s1>>s2;
   cout<<s1.size()<<" "<<s2.size()<<endl;
   cout<<s1<<s2<<endl;
 
   //string == array of char   && char = array of string 
   char temp = s1[0];
   s1[0]=s2[0];
   s2[0]=temp;
 
   cout<<s1<<" "<<s2 <<endl;
   
 
 
   return 0 ;
}