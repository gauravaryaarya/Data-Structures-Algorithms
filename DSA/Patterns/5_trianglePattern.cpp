/*
    1
    2 2
    3 3 3
    4 4 4 4
*/

/*
    A
    B B
    C C C
    D D D D
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 1 /*, print = 65*/; i <= n; i++ /*,print++*/)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " "; // cout << (char)print << " ";
        }
        cout << endl;
    }
    return 0;
}