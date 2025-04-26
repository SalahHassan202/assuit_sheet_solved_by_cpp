// I. Smallest Pair
#include <iostream>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int size, result = 0, flag = 1;
        cin >> size;
        int arr [size];
        for (int x = 0; x < size; x++)
        {
            cin >> arr[x];
        }
        int min;
        for (int z = 1; z <= size; z++)
        { // (1,2)
            for (int x = z + 1; x <= size; x++)
            {
                result =(arr[z - 1] + arr[x - 1]) + (x - z);     // Ai + Aj + j - i     ========>>>  j , i are position of numbers
                    
                if (flag == 0 && min > result)
                {
                    min = result;
                }
                if (flag)   // flag ==1 ;
                { 
                    min = result;
                    flag = 0;          // 0
                }
                result = 0;
            }
        }

        cout << min << endl;
    }

	return 0;
}