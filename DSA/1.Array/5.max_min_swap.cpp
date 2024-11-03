#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sizeofarray = sizeof(arr) / sizeof(int);
    int smallest = INT_MAX;
    int indexsmall = 0;
    int largest = INT_MIN;
    int indexlarge = 0;

    for (int i = 0; i < sizeofarray; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            indexsmall = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            indexlarge = i;
        }
    }
    swap(arr[indexsmall], arr[indexlarge]);

    for (int i = 0; i < sizeofarray; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}