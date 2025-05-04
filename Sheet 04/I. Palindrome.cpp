// I. Palindrome
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int size=s1.size();
    int flag =0 ;

    for(int i =0 ; i<size/2 ; i++)   
    // we compare element of string by each other ===> right with left ===> so that each turn we use two element one from right and one from left ===> so that we use size/2
    {
        if(s1[i] != s1[size-i-1])   //['a','m','m','a']    ====> s[0]==s[size - 1]  && s[1]==s[2]   ===> print YES   else print NO
        {
        cout<<"NO"<<endl;
        return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;

}