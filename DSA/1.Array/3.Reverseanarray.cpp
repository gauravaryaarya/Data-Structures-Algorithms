// Using 2 pointer approch
// Time complexity - O(n)
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5, 6};
    int sizeofarray = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = sizeofarray - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < sizeofarray; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}