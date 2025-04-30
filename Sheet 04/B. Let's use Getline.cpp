// B. Let's use Getline
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
   string s1;
   getline(cin,s1);
   for(int i =0 ; i<s1.size() ; i++)
   {
      if (s1[i] == '\\')
      {
         break;
      }
         cout<<s1[i];
   }


   return 0 ;
}
