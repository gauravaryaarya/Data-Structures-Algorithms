#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int array[5] = {10, 50, 7, 1, 5};
    int sizeofarray = sizeof(array) / sizeof(int);
    int smallest = INT_MAX; //+infinity
    int indexsmall = 0;
    int largest = INT_MIN; //-infinity
    int indexlarge = 0;

    for (int i = 0; i < sizeofarray; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
            indexsmall = i;
        }
        if (array[i] > largest)
        {
            largest = array[i];
            indexlarge = i;
        }
    }

    cout << "Smallest element is: " << smallest << " at index = " << indexsmall << endl;
    cout << "Largest element is: " << largest << " at index = " << indexlarge << endl;

    return 0;
}