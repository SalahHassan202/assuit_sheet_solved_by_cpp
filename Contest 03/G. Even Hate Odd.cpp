// G. Even Hate Odd
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{

/*

3            ======> testCases
4            ======> size of array 
1 2 3 4      ======> element of array             &&  2 even   2 odd      ,,,      0 operation to make the even == odd
4
1 1 1 1                                           && 0 even    4 odd         ,,,    2 operation to make the even == odd
3
1 2 3                                             && 1 even    2 odd         ,,,    -1 operation to make the even == odd


*/


    int testCases;
    cin>>testCases;
    while (testCases--)
    {
        int size ,even =0 , odd =0  ;
        cin>>size;
        int arr[size];

        for(int  i =0 ; i<size ; i++)
        {
            cin>>arr[i];
        }
        for(int  i =0 ; i<size ; i++)
        {
            if(arr[i] % 2 ==0 )
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(even == odd )
        {
            cout<< 0 <<endl;
        }
        else if (size % 2 != 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<abs(even - odd) /2 <<endl;
        }

        
    }


    return 0 ;
}


