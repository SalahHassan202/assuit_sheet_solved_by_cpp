// B. Drawing 'X'
#include <iostream>
using namespace std;
int main()
{


int num;
cin>>num;

for(int i =0 ; i<num ;i++)
{
    for(int j=0 ;j< num ; j++)
    {
        if(i==j && i != num/2  && j!= num/2)
        {
            cout<<"\\";

        }
        else if ( i == num/2  && j == num/2)
        {
            cout<<"X";

        }
        else if( j!= num/2 && i ==((num -1)-j) )
        {
            cout<<"/";
        }
        else
        {
            cout<<"*";
        }
        
    }
    cout<<endl;
}


    return 0;
}
