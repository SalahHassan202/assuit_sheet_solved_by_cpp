// T. URL
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string URL;
    cin>>URL;
    int size= URL.size();

    for(int i =0 ; i <size ; i++)
    {
        if(URL[i] == '?')
        {
            i++;
            for(int j = i ; j<size; j++)
            {
                if( URL[j] == '=')
                {
                    cout<<": ";
                    continue;
                }
                if(URL[j] == '&')
                {
                    cout<<endl;
                    continue;
                }
                cout<<URL[j];
            }
            break;
        }
    }
    

    return 0;

}