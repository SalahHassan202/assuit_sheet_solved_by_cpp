// H. Inverted Pyramid
#include<iostream>
using namespace std;
int input;
void print (int num )
{
    if(num == 0)
    {
        return ;
    }
    

    for(int i =0 ; i< (input - num) ; i++)             // spaces
    {
        cout<<" ";
    }
    for (int i =0 ; i< (num *2 -1) ; i++)             // lines 
    {
        cout<<"*";
    }
    cout<<endl;
    print(num -1);
}

int main()
{

    // solution of the problem ........... two for statement ===> for lines && for spaces 
    //                  4 
    //               *******                4                  4 *2 -1 = 7 stars              4-4 = 0 spaces
    //                *****                 3                  3 *2 -1 = 5 stars              4-3 = 0 spaces
    //                 ***                  2                  2 *2 -1 = 3 stars              4-2 = 0 spaces
    //                  *                   1                  1 *2 -1 = 1 stars              4-1 = 0 spaces
    

    int n ;         cin>>n ;             input = n ;
    print (n);
   

    return 0;
}