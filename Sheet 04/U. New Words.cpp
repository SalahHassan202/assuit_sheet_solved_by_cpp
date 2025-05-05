// U. New Words
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int size = word.size();
    int  e = 0 , g = 0 , y =0 , p =0 , t =0 ;

    for(int i = 0; i<size ; i++)
    {
        if(word[i] == 'e' || word[i] == 'E')
        {
            e++;
        }

        else if(word[i] == 'g' || word[i] == 'G')
        {
            g++;
        }

        else if(word[i] == 'y' || word[i] == 'Y')
        {
            y++;
        }

        else if(word[i] == 'p' || word[i] == 'P')
        {
            p++;
        }

        else if(word[i] == 't' || word[i] == 'T')
        {
            t++;
        }


    }

    int min1 = min(e , g );
    int min2 = min(y , p );
    int min3 = min(min1 , min2 );
    int min4 = min( min3 , t );    // the smalest value 


    cout<<min4;


    return 0;

}