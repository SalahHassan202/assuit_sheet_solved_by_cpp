// L. Max Subarray
#include <iostream>
using namespace std;
int main()
{

    /*
    
     array = [1,6,3,7] then the subarrays are
      [1] , [6] , [3] , [7] ,
      [1,6] , [1,6,3] , [1,6,3,7] ,   ====> max between every to number .... max (1,6) == 6 && max(1,6,3) is 6 .......etc
      [6,3] , [6,3,7] ,
      [3,7] . 
     

     /// compare between old max and new max every time  to get the max in every time 
     
    */


    int testCases ;
    cin>> testCases ;
      

    while (testCases--)
    {   
        int size ;
        cin>> size;
        int a[size];
        
        for(int i =0 ;i<size ; i++)
        {
            cin>>a[i];
            cout<<a[i]<<" ";
        }


        int i=0 , j =0 ;
    int ma ;   // max
    while (true)
    {
        if ( j == size -1)
        {
            break ;   // all sub array are ended and there is not sub array else.
        }
        if ( i == j)
        {
            ma =max(a[i] , a[i+1]);

        }
        else
        {
            ma =max (ma , a[i+1]);
        }
        cout<<ma <<" ";

        i++ ; // 1  2   3  4   ....etc 

        if(i== size -1)   // the last element 
        {
        j++ ;   // j=0 become j=1  to make a sub array from the another element 
        i=j ;
        // break ;
        }
    
    }
    cout<<endl;
     


    }


    

    return 0;
}


