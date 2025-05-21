// R. Palindrome Array
#include <iostream>
#include <cmath>
using namespace std;

// ******************************* NOTE THAT ***************************************
// GNU C++14 =====> is the Language 
// GNU C++17 =====> dosn't work in this problem


int size ;   int arr[100000];      // First line contains a number N (1 ≤ N ≤ 105) number of elements.====> GIVEN IN PROBLEM...
bool palindrome (int index)        // bool ====> return true or false ====> YES or NO 
{
    if(index == size )
    {
        return 1;       // return 1;  to make the condition TRUE  ====> return (arr[index] == arr[size - index -1 ] ) && palindrome (index +1) ;
        // if you make (return 0;) insted of ( return 1; ) the output will be reversed  ====> if you want to get YES the output will be NO.
    }
    return (arr[index] == arr[size - index -1 ] ) && palindrome (index +1) ;
    /*
    
    0 1 2 3 4 ====> index of elements
    1 2 3 2 1 ====> array of elements

    i will compare the first index with the last index 
    and 
    i will make (index +1)
    to compare another time .
    
    
    */
}
int main()
{

    /*
        An array is called palindrome 
        if it reads the same backward and forward, 
        for example,
        arrays { 1 } and { 1,2,3,2,1 } are palindromes,
        while arrays { 1,12 } and { 4,7,5,4 } are not.
    */

    cin >> size ;

    for(int i =0 ;i< size ; i++)
    {
        cin>> arr[i];
    }

    if(palindrome (0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}