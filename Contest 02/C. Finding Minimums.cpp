// C. Finding Minimums
#include <iostream>
using namespace std;
int main()
{

int size , sequance;
cin>> size >>sequance;
int counter =0 ;
int min , flag =1 ;

for(int i= 1 ; i<=size ;i++)
{
    int number;
    cin>>number;
    if(flag)
    {
        min =number;
        flag=0;
    }
    else
    {
        if(number< min)
        {
            min=number;
        }
    }
    counter++;

    if(counter ==sequance || i ==size)
    {
        cout<<min<<" ";
        counter =0 ;
        flag =1;
    }

}



    return 0;
}


