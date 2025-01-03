// sum of numbers from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:" ;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is:" << sum;
    return 0;
}