/*
    1 2 3
    4 5 6
    7 8 9
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int count = 1; // 1. char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << count << " "; // 2. cout << ch << " ";
            count++;              // 3. ch++;
        }
        cout << endl;
    }
    return 0;
}