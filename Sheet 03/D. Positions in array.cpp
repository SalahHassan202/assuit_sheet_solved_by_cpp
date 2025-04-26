// D. Positions in array
#include <iostream>
using namespace std;
int main()
{
  
  int size;
  cin>>size;

  for(int i=0 ; i<size;i++)
  {
    long long value;
    cin>>value;

    if(value <= 10 )
    {
        cout<<"A["<<i<<"] = "<<value <<endl;
    }
  }



    return 0;
}
