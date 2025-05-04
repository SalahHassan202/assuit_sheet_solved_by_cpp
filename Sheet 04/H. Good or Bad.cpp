// H. Good or Bad
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;   cin>>t ;
    while(t--)
    {
        string s1;
        cin>>s1;
        int size = s1.size();
        int flag =0;

        for(int i =0 ; i< size ; i++)
        {
            if(s1[i]=='0' && s1[i+1]=='1' && s1[i+2]=='0' || s1[i]=='1' && s1[i+1]=='0' && s1[i+2]=='1' ) 
            {
               flag =1;
            }
           
        }

        if(flag ==1)
        {
            cout<<"Good"<<endl;
        }
        else
        {
            cout<<"Bad"<<endl;
        }
    }


    return 0;

}