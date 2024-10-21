#include <iostream>
using namespace std;

// sum of 2 numbers
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

// minimum of 2 numbers
int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// calculate sum of numbers from 1 to n
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// calculate n factorial
int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int main()
{
    cout << sum(5, 6) << endl;
    cout << minimum(100, 79) << endl;
    cout << sum(10) << endl;
    cout << factorial(5) << endl;
    return 0;
}