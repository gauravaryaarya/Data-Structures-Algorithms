/*
    1 1 1 1
      2 2 2
        3 3
          4
*/
/*
    A A A A
      B B B
        C C
          D
*/
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int k = i - 1; k > 0; k--)
        {
            cout << "  ";
        }

        for (int j = n; j >= i; j--)
        {
            cout << i << " "; // cout<<ch<<" ";
        }
        // ch++;
        cout << endl;
    }
    return 0;
}