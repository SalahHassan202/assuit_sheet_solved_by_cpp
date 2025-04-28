// R. Permutation with arrays
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int a[size];
    int b[size];

    for (int i =0 ; i<size ; i++)
    {
        cin>>a[i];
    }
 
        // function sort in c++
        sort(a , a+size);

    for (int i =0 ; i<size ; i++)
    {
        cin>>b[i];
    }

    // function sort in c++
       sort(b, b+size);

        int flag =0 ;
        for(int i =0 ; i<size ;i++)
        {
            if(a[i] != b[i])
            {
                flag =1;
                 break;
            }
        }

        if(flag==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }



    return 0 ;
}


