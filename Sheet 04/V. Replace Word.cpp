// V. Replace Word
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string word ;
    cin>>word;
    int size = word.size();

    for(int i =0 ; i<size ; i++)
    {
        if(word[i] == 'E' && word[i+1] == 'G' && word[i+2] == 'Y' && word[i+3] == 'P' && word[i+4] == 'T'  )
        {
            i+=4;  // i = i +4 ;   // 4 element 
            cout<<" ";
        }
        else
        {
            cout<<word[i];
        }
    }
    

    return 0;

}