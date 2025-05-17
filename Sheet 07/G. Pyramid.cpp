// G. Pyramid
#include<iostream>
using namespace std;
int input;
void print (int num )
{
    if(num == 0)
    {
        return ;
    }
    
    print(num -1);

    for(int i =0 ; i< (input - num) ; i++)
    {
        cout<<" ";
    }
    for (int i =0 ; i< (num *2 -1) ; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}

int main()
{

    // solution of the problem ........... two for statement ===> for lines && for spaces 
    //                  4 
    //                  *                   1                  1 *2 -1 = 1 stars
    //                 ***                  2                  2 *2 -1 = 3 stars
    //                *****                 3                  3 *2 -1 = 5 stars
    //               *******                4                  4 *2 -1 = 7 stars
    

    int n ;         cin>>n ;             input = n ;
    print (n);
   

    return 0;
}