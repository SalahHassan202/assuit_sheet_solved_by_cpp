// K. I Love strings
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t ;    cin>>t;
    while(t--)
    {
    string s1,s2;
    cin>>s1>>s2;
    int size= s1.size()+s2.size();
    int flag1=1,flag2=1 ;
        for(int i =0 ; i<size ; i++)
        {
            if(s1.size() !=i   && flag1)   // flag1 ==1 
            {
                cout<<s1[i];
            }
            else
            {
                flag1=0;
            }

            if(s2.size() !=i  && flag2)  // flag2 ==1 
            {
                cout<<s2[i];
            }
            else
            {
                flag2=0;
            }
            
        }
        cout<<endl;
    }


    return 0;

}