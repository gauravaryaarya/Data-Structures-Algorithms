#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 2, 3, 4, 5, 3, 6, 6, 6, 7, 88, 8};
    int sizeofarray = sizeof(arr) / sizeof(int);
    for (int i = 0; i < sizeofarray; i++)
    {
        for (int j = 0; j < sizeofarray; j++)
        {
            if (arr[i] == arr[j])
            {
                continue;
            }
            else
            {
                cout << arr[j] << " ";
            }
        }
    }
    return 0;
}