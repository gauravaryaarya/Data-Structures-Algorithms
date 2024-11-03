#include <iostream>
using namespace std;
int main()
{
    int array[5];
    int sizeofarray = sizeof(array) / sizeof(int);
    for (int i = 0; i < sizeofarray; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < sizeofarray; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}