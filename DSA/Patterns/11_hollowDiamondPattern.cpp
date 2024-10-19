/*

      *
   *     *
 *          *
    *     *
       *

 */

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // UPPER HALF
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // print star
        cout << "*";

        if (i != 0)
        {
            // spaces
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << " ";
            }
            // print star
            cout << "*";
        }

        cout << endl;
    }
    // LOWER HALF
    for (int i = 0; i < n - 1; i++)
    {
        }
    return 0;
}
