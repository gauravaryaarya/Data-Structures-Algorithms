#include <iostream>
using namespace std;

// Time complexity - O(n)
void linearsearch(int arr[], int sizeofarray, int target)
{
    for (int i = 0; i < sizeofarray; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index " << i;
            return;
        }
    }
    cout << "Element not found";
}
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sizeofarray = sizeof(arr) / sizeof(int);
    int target = 0;
    linearsearch(arr, sizeofarray, target);
    return 0;
}