/*
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}