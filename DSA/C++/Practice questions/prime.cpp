#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i < n - 1; i++)
    // We can also use i <= sqrt(n) i.e i*i <= n
    // to reduce the time complexity
    // As the factors of a number are always less than or equal to its square root
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << n << " is a Prime Number";
    }
    else
    {
        cout << n << " is not a Prime Number";
    }
    return 0;
}