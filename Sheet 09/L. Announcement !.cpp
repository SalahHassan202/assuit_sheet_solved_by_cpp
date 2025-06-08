// L. Announcement !
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
using namespace std;
int main()
{
    int n ;            // the number of problems 
    cin >> n ;
    int arr[n] ;
    int counter = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    sort(arr , arr + n) ;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == arr[i+1])
        {
            counter++;
        }
    }

    if(counter == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << counter << endl;
    }

    
    return 0 ;
}