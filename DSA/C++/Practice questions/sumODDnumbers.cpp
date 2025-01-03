// sum of all odd numbers from 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    cout << "Sum is:" << sum;
    return 0;
}

//same can be done for even numbers