// I. Count Vowels
#include<iostream>
using namespace std;
int vowel (char x )             // check for every letter is vowel or no 
{
    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
             x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' ; 
}
int check ( string word , int size )
{
    if(size -1 == 0)
    {
        return vowel(word[size-1]);
    }
    else
    {
        return vowel(word[size-1]) + check(word , size-1) ;
    }
}


int main()
{

    //  Vowel letters: ['a', 'e', 'i', 'o', 'u']. 

    string word ;              getline(cin , word);

    int size = word.size();

    cout<< check (word , size);
   

    return 0;
}