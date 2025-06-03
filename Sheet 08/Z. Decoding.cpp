// Z. Decoding
#include <iostream>
# include <string >
#include <algorithm>
using namespace std;
int main ()
{
   /*
   5 (right)                4 (left)
   logva                       ovga              gva                va             a
   ----------------------------------------------------------------------------------
   output is
   "volga"     ..... etc 
   
   
   */
    int size ;              cin >>  size ;
    string s1 , res ="" ;               cin >> s1 ;
    int i = 0 ; 
    while(size)
    {
        if(size % 2 == 0)      // even ===> put the letter in the left 
        {
            res = s1[i] + res ;
        }
        else                  // odd ===> put the letter in the right
        {
            res = res + s1[i] ;
        }
        i++;
        size--;      // 5 4 3 2 1 
    }

cout<< res <<endl;


    return 0 ;
}