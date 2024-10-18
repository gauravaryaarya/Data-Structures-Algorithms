/*
    1
    2 3
    4 5 6
    7 8 9 10
*/

/*
    A
    B C
    D E F
    G H I J
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int num = 1;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " "; // cout<<num<<" ";
            ch++;              // num++;
        }
        cout << endl;
    }
    return 0;
}