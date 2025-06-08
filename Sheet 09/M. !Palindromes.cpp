// M. !Palindromes
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{

    /*
    
    Palindromes ====> means a word, verse, or sentence or a number that reads the same backward or forward. 

    1881 ===> Palindrome
    1234 ===> not Palindrome

    aba ===> Palindrome
    abc ===> not Palindrome 
    
    idea of solution :: 
    string == abcde ===> check if it Palindrome or not then print the largest size of string that make the substring is not Palindrome

    */

    string word ;          cin >> word ;
    long long counter = 0 , size = word.size() ;
    bool valid = true ;             // flag 
    for(int i = 0 ; i < size ; i++)
    {
        if(word[i] != word[size - i - 1])       // not Palindrome
        {
            valid = false ;
        }

    }

    if(valid == false)                       // not Palindrome
    {
        cout << size << endl;          // return size of the string 
        return 0 ;                            // finish program ;
    }


    // if it palindrome 

    long long arr[100009] = {0} ;                    // String S (1 ≤ |S| ≤ 100000) consists of lower case English letters.
    for(int i = 0 ; i < size ; i++)
    {
        arr[word[i]]++;       // arr[word[0]] ==> arr[a] = 0  ===> arr[a]++ ; ===> arr[a] = 1 ; 
    }

    for(int i = 'a' ; i <= 'z' ; i++)     // 'a' == 97  ,,  'b' ==98  ,,  'c' == 99  ,,  'd' == 100  ,,   ......etc
    {
        if(arr[i] > 0)
        {
            counter++;
        }
    }

    if(counter == 1 )         // one element  ==> no substring ===> examble   ==> input is one letter ===> a 
    {
        cout << 0 << endl;
    }
    else
    {
        cout<< size - 1 << endl;        
    }


    return 0 ;
}