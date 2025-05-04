// J. Count Letters
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int size = word.size();
    sort(word.begin(), word.end());    // arrange the string....

    for(int i =0 ; i<size ; i++)
    {
        char res=word[i];
        int counter =1 ;   // because we have the firtst number in the string so that we count the first number
        while(word[i]==word[++i])
        {
            counter++;
        }
        i--;  
        cout<<res<<" : "<<counter<<endl;

        
    }
    
    return 0;

}