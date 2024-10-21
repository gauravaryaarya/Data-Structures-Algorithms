/*

      *
   *     *
 *          *
    *     *
       *

 */
// spaces- n-i-1
// one star
// spaces (odd)- 2*i-1 , 2*(n-2-i)-1
// one star
// first and last row - one star

#include <iostream>
using namespace std;
int main()
{
   int n = 4;

   // upper half
   for (int i = 0; i < n; i++)
   {
      for (int k = 0; k < n - i - 1; k++)
      {
         cout << " ";
      }

      cout << "*";

      if (i > 0)
      {
         for (int j = 0; j < 2 * i - 1; j++)
         {
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
   }
   // lower half
   for (int i = 0; i < n - 1; i++)
   {
      for (int k = 0; k < i + 1; k++)
      {
         cout << " ";
      }
      cout << "*";
      if (i != n - 2)
      {
         for (int j = 0; j < 2 * (n - 2 - i) - 1; j++)
         {
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
   }
   return 0;
}