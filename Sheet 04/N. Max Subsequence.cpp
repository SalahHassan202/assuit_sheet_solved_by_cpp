// N. Max Subsequence
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
   int size ;
   cin>>size;
   string word ; 
   char temp  ;
   cin>>word;
   int counter=0 ;

   for(int i =0 ; i<size ; i++)
   {
        if(i ==0 )
        {
            temp = word[i];
            counter++;
        }
        else
        {
            if(word[i] != temp )
            {
                counter++;
                temp=word[i];

            }
        }

   }

   cout<<counter ;
    
    return 0;

}