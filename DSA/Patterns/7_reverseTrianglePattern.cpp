/*
    1
    2 1
    3 2 1
    4 3 2 1
*/
/*
    A
    B A
    C B A
    D C B A
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        int ch = 64 + i;             // 1.remove
        for (int j = 1; j <= i; j++) // set j=i;j>=1;j--
        {
            cout << (char)ch << " "; // print j
            ch--;                    // remove
        }

        cout << endl;
    }
    return 0;
}