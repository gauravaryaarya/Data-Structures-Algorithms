#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int product = 1;
    int sizeofarray = sizeof(arr) / sizeof(int);
    for (int i = 0; i < sizeofarray; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout << "Sum of array is: " << sum << endl;
    cout << "Product of array is: " << product << endl;
}