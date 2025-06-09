// Z. Triangle
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

bool triangle(int x1 , int y1 , int x2 , int y2 , int x3 , int y3)
{
    if(((x1 == x2) && (y1 == y2))  ||  ((x1 == x3) && (y1 == y3))  ||( (x2 == x3) && (y2 == y3)))
    {
        return false ;
    }

    int length1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) ;
    int length2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3) ;
    int length3 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3) ;

    vector<int> v ;
    v.push_back(length1) ;
    v.push_back(length2) ;
    v.push_back(length3) ;

    // sort
    sort(v.begin() , v.end()) ; 

    int z1 = v[0] + v[1] ;
    int z2 = v[2] ;

    return z1 == z2 ; 
}

int main()
{
    int x1 , y1 , x2 , y2 , x3 , y3 ; 
    cin >> x1 >>y1 >> x2 >> y2 >> x3 >> y3 ;

    if(triangle( x1 ,  y1 ,  x2 ,  y2 ,  x3 ,  y3))
    {
        cout << "RIGHT" << endl;
    }
    else if (
            triangle( x1 - 1 ,  y1 ,  x2 ,  y2 ,  x3 ,  y3) || triangle( x1 + 1 ,  y1 ,  x2 ,  y2 ,  x3 ,  y3) ||
            triangle( x1 ,  y1 - 1 ,  x2 ,  y2 ,  x3 ,  y3) || triangle( x1 ,  y1 + 1 ,  x2 ,  y2 ,  x3 ,  y3) ||
            triangle( x1 ,  y1 ,  x2 - 1 ,  y2 ,  x3 ,  y3) || triangle( x1 ,  y1 ,  x2 + 1  ,  y2 ,  x3 ,  y3) ||
            triangle( x1 ,  y1 ,  x2 ,  y2 - 1 ,  x3 ,  y3) || triangle( x1 ,  y1 ,  x2 ,  y2 + 1 ,  x3 ,  y3) ||
            triangle( x1 ,  y1 ,  x2 ,  y2 ,  x3 - 1 ,  y3) || triangle( x1 ,  y1 ,  x2 ,  y2 ,  x3 + 1 ,  y3) ||
            triangle( x1 ,  y1 ,  x2 ,  y2 ,  x3 ,  y3 - 1) || triangle( x1 ,  y1 ,  x2 ,  y2 ,  x3 ,  y3 + 1 ) 
            )
    {
       cout << "ALMOST"  << endl;
    }    
    else
    {
        cout << "NEITHER" << endl;
    }    
   
    

    return 0;
}