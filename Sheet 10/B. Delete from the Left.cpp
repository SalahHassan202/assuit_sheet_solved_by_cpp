// B. Delete from the Left
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int main()
{
 
    string word1 , word2 ;                   cin >> word1 >> word2 ;
    stack<char> s1 ; 
    stack<char> s2 ; 

    for(int i = 0 ; i < word1.size() ; i++)
    {
        s1.push(word1[i]) ; 
    }

    for(int i = 0 ; i < word2.size() ; i++)
    {
        s2.push(word2[i]) ;
    }

    while(!s1.empty() && !s2.empty())
    {
        if(s1.top() != s2.top())
        {
            break ; 
        }
        s1.pop() ; 
        s2.pop() ; 
    }

    cout << s1.size() + s2.size() ;
    

    return 0;
}


