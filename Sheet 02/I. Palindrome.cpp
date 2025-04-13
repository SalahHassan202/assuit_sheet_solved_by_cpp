// I. Palindrome
#include<iostream>
#include<string>
#include <sstream>         // to using stringstream  ;  ===>       stringstream s1 ;          stringstream s2 ;
#include<algorithm>
using namespace std; 
int main()
{

	/*

	Note:

	A palindrome number is a number that reads the same forward or backward.

	For example: 12321, 101 are palindrome numbers, while 1201, 221 are not.

	A leading zero is 
	any 0 digit that comes before the first nonzero digit in a number 
	for example :
	numbers (005 , 01 , 0123 , 02 , 000250 ) are leading zeroes
	but ( 5 , 123 , 20 ,2500 ) not leading zeroes numbers .

	*/

	string num1 ;              cin >> num1 ; 
	int result1 = 0  , result2 = 0 ; 
    // to ignore zeros from the number you should convert the string to integer to ignore zeros from the number 
    int size = num1.size();
    char num2[size];
    int counter = 0 ;

    // to inverse the number from right to the left 
    for(int i = size-1 ; i >=0 ; i--)
    {
        num2[counter]=num1[i];
        counter++; 
    }

    // convert from string to integer 
   // convert from string to integer ( to ignore zeros from the left )
	stringstream s1 ;      // object =====>( OPP )
	s1<<num1;      
	s1>>result1;

	// convert from string to integer ( to ignore zeros from the left )
	stringstream s2 ;     // object =====>( OPP )
	s2<<num2; 
	s2>>result2;

    // the number with ignore zeros from the left 
    cout << result2 <<endl;

    if(result1 == result2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	

	return 0;
}



