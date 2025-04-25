// D. Range Sum
#include <iostream>
using namespace std;
int main()
{

long long lines ;
cin>>lines;

while(lines--)
{
    long long num1 , num2 ,mn,mx;   // mn ===>min    && mx====> max
    
    cin>>num1>>num2;
    mx =max(num1 ,num2);
    
    mn =min(num1 ,num2);


    mn--;     

    long long result1 = mn*(mn+1)/2  ;    // summition of 0 to num1--
    long long result2 = mx*(mx+1)/2  ;    // summition of 0 to num2

    cout<< result2 -result1 <<endl;


}

    return 0;
}


