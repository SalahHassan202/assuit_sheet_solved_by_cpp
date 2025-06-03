// U. Ilya and Bank Account
#include <iostream>
# include <string >
#include <algorithm>
using namespace std;
int main ()
{
   /*
    delet the last digit or delet the digit before the last  // (the last digit or the digit before last)
   2230  ===>  delete 0     ===> result is ====> 223        <  2230        ( false )
   2230  ===>  delete 3     ===> result is ====> 220        <  2230        ( false )
   output is 2230
   ==================================================================================
   -10  ===>  delete  0     ===> result is ====> -1       > -10       ( true )
   -10  ===>  delete -1    ===> result is ====>   0       > -10       ( true )
   if (-1 > 0 ) ===========> output is 0
   ==================================================================================
    !   output is the max between all number ;
   
   */
    
    //  i want two string to make this ===> first string ==> delete the last digit ;;; second string ===> delete the digit before the last.

    string num ;                cin >> num ;      // "1234"

    // convert string to number by using this function ====> stoi(num) ;
    long long num1 = stoi(num);     // "1234"      ====> 1234 =======> convert string to int number 

    string save = num; 

    num.erase(num.size() -1 , 1) ;        // delet the last digit
    save.erase(save.size() - 2 , 1) ;       // delet the  digit before the last 
    long long res = max({num1 ,(long long) stoi(num) , (long long) stoi(save)} ) ;

    cout<< res <<endl;

    return 0;
}