// Z. Left Max
#include <iostream>
#include <cmath>
using namespace std;


// ******************************* NOTE THAT ***************************************
// GNU C++14 =====> is the Language 
// GNU C++17 =====> dosn't work in this problem


int size , number ;
int maxNumber ;

void print (int counter)
{
    cin>> number ;

    if(counter == size )
    {
        return ;
    }
        if(counter ==0 )
        {
            cout<<number<<" ";
            maxNumber = number ;
        }
        else
        {
            if(maxNumber < number)
            {
                cout<< number <<" ";
                maxNumber = number ;
            }
            else
            {
                cout<<maxNumber <<" ";
            }
        }

    return print(counter+1);
}
int main ()
{

    /*
        5               ====> size 
        4 3 5 7 3

        solution ::::

        print first number = 4 ;
        compare (4 > 3 )   ====> print 4 
        compare (4 > 5 )   ====> print 5 
        compare (5 > 7 )   ====> print 7
        compare (7 > 3 )   ====> print 7


        the output is ====> 4 4 5 7 7  

    */
    cin>> size;

    print (number) ;
    
    return 0;
}


/*


*************************** without recursion *******************************************

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int size , number ;      cin>> size;
    int maxNumber ;
    for(int i =0 ; i< size ; i++)
    {
        cin>> number ;
        if(i ==0 )
        {
            cout<<number<<" ";
            maxNumber = number ;
        }
        else
        {
            if(maxNumber < number)
            {
                cout<< number <<" ";
                maxNumber = number ;
            }
            else
            {
                cout<<maxNumber <<" ";
            }
        }

    }
    
    return 0;
}


*/