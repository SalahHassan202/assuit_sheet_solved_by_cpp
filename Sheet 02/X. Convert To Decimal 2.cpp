// X. Convert To Decimal 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, times;
    cin >> times;

    for (int i =0; i < times; i++)
    {
        cin >> num;
        int ones = 0;
        int z = 0;
        int sum = 0;

        while (num >0)
        {

            if (num % 2 == 1)
            {
                ones++;
                sum += 1 * pow(2, z);
                z++;
            }
            num /= 2;

        }

        cout <<sum << endl;
    }


    return 0;
}