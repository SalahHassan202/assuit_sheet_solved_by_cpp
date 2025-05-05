// Q. Reverse Words
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string word;
    int flag =0 ;
    while(cin>>word)
    {
        reverse(word.begin() , word.end()) ;
        if(flag)  // 1 
        {
            cout<<" ";
        }
        flag =1;
        cout<<word;
    
    }
    return 0;

}