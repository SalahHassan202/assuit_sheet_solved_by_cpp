// W. Football
#include <iostream>
#include <string>
#include <iomanip>                                  //  setprecision()
#include <algorithm> 
#include <cmath>
#include <map>
using namespace std;
 
int main()
{
    /*
    5 
    abc
    dc 
    v
    vv
    dc
    ---------------
    output is dc 
    
    why ...?
    abc == 1 
    dc == 2 
    v == 1 
    vv == 1

    print ====> dc  (max) 
    
    */

    int size ;          cin >> size ;
    map <string,int> football ;

    for(int i = 0 ; i < size ; i++)
    {
        string key ;            cin >> key ;
        
        if(football[key] == 0)
        {
            football[key] = 1 ;
        }
        else
        {
            football[key] += 1 ;            // football[key] = football[key] + 1 ;
        }
    }
    
    map<string,int>::iterator myFootball ;         // as a pointer ===> like a class in OPP c++

    string resKey = football.begin () -> first ;
    int resValue = football.begin() -> second ;

    for(myFootball = football.begin() ; myFootball != football.end() ; myFootball++)
    {
        //    cout << myFootball -> first << " " << myFootball -> second  << endl;


        if (myFootball -> second > resValue )
        {
            resKey = myFootball->first ;
            resValue = myFootball->second ;
        }

    }

    cout << resKey << endl;

    return 0 ;
}