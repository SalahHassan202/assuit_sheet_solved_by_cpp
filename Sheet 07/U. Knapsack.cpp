// U. Knapsack
#include <iostream>
#include <cmath>
using namespace std;

int knapSack(int w , int weight[] , int value[] , int items)
{
    /*
    base case occar when the third line don't happen 

    3  8 

    3  30
    4  50          return 0;
    10 80       ===> ignore it 

    */
   if(w == 0 || items == 0)         // the end 
   {
        return 0;
   }

    if(weight[items -1 ] > w )     // the last case.....  i will ignore the last element ===> ( items -1 )
    {
        return knapSack (w , weight , value , items - 1);
    }
    
    else
    {
		return max (value[items-1] + knapSack( w - weight[items-1], weight , value , items - 1)  ,  knapSack(w , weight , value , items - 1) ) ; 
    }

}
int main ()
{

    /*
    item , value , weight =====> every item have a weight and a value 
    like this :::

    3  8    ====> ( 3 is the number of items  and 8 is the weight of the bag )
    3  30   ====> 3 is the weiht  30 is the value 
    4  50   ====> 4 is the weiht  50 is the value
    5  60   ====> 5 is the weiht  60 is the value
    ========================================================
    i have two cases 
    ========================================================
    the first is 

    3  30 
    4  50 
    ===========
    80 =====> (30 + 50 )   and (3 + 4 < 8 )
    ========================================================
    the second is 

    3  30 
    5  60  
    ===========
    90=====> (30 + 60 )   and (3 + 5 == 8 )
    ========================================================
    print the max in all  cases 
    90 ====> final result 
    
    */

    int items , w1 ;       // ( item ====>  is the number of items  and   w =====> is the weight of the bag )
    cin>> items >> w1 ;
    // i have two array the first for the weight and the second for the value 
    int weight [items];
    int value [items];

    for(int i =0 ; i< items ; i++)
    {
        cin>> weight[i] >> value[i];
    }

    cout<< knapSack ( w1 , weight , value , items )<<endl;


    return 0;
}