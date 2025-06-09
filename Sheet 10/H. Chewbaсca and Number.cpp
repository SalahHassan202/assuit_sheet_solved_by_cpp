// H. Chewbaсca and Number
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int main()
{
    string num ;                 cin >> num ;
    long long size = num.size() ;  
    char res[size] ;
    for(int i = 0 ; i < size ; i++)
    {
        if(num[i] == '9' && i == 0 )
        {
            res[i] = num[i] ; 
        }
        else if (num[i] >= '5')
        {
            res[i] = '9' - num[i] + '0' ;             // '0' ===> 48   ;;; '1' ===> 49  ;;; '1' ===> 50 ;;; .....
        }
        else
        {
            res[i] = num[i] ; 
        }
    }

    for(int i = 0 ; i < size ; i++)
    {
        cout << res[i] ; 
    }
   
    

    return 0;
}


