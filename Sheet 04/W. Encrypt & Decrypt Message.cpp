// W. Encrypt & Decrypt Message
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // Key and Original have the same length........ 
    string Key      = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/" ;
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" ;
    int j =0 , i =0 ;
    int Q ;    cin>> Q  ;    //     Q  == flag 
    string s1 ;   cin>>s1 ;
    int size = s1.size() ;

    // In Encryption: For each letter x in "Original" replace it by the equivalent letter y from "Key" 
    
    if( Q == 1)
    {

        for(i =0 ; i <size ; i++)
        {
            for(j=0 ; j <Original.size() ; j++)
            {
                if(s1[i]  ==  Original[j])
                {
                     break;
                }

            }
            cout<<Key[j] ;
        }
    }  
      
    // in Decryption: For each letter y in "Key" replace it by the equivalent letter x from "Original".

    else     //  (Q == 2)
    {
        for(i =0 ; i <size ; i++)
         {
            for(j=0 ; j <Key.size() ; j++)
            {   
                if(s1[i]  ==  Key[j])
                {   
                    break;
                }

            }
            cout<<Original[j] ;
        }
    }

   

    return 0;

}