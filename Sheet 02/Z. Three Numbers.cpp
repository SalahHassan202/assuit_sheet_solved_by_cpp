// Z. Three Numbers
#include <iostream>
using namespace std;
int main()
{

int x ,y;     // x ===> start     ;;;;     y===> end
cin>>x>>y;
int counter =0;

for(int i=0 ; i<=x ;i++)
{
    for ( int j =0 ; j<=x ; j++)
    {
        if (y-i-j>=0   &&  y -i-j<= x)
        {
            counter++;
        }
    }
}
cout<<counter<<endl;

    return 0;

}