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

// calculate sum of digits of a number
int sumdigit(int n)
{
    int lastdigit = n % 10;
    int sum = 0;
    for (int i = 0; n > 0; i++)
    {
        sum = sum + lastdigit;
        n = n / 10;
        lastdigit = n % 10;
    }

    return sum;
}

// calculate nCr binomial coefficient for n & r
int binomialcoeff(int n, int r)
{
    // we have already created factorial function so->
    int nfact = factorial(n);
    int rfact = factorial(r);
    int binomial = nfact / (rfact * factorial(n - r));
    return binomial;
}

// WAF to check if a number is prime or not
bool isPrime(int n)
{
    bool primecheck = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            primecheck = false;
            break;
        }
        else
        {
            primecheck = true;
        }
    }
    return primecheck;
}

// WAF to print all prime numbers from 1 to N
void printPrime(int n)
{ // using function isPrime
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

// WAF to print nth fibonacci number 0,1,1,2,3,5,8....
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << sum(5, 6) << endl;
    cout << minimum(100, 79) << endl;
    cout << sum(10) << endl;
    cout << factorial(5) << endl;
    cout << sumdigit(123) << endl;
    cout << binomialcoeff(6, 3) << endl;
    cout << isPrime(7) << endl;
    printPrime(10);
    cout << endl;
    cout << fib(6) << endl;

    return 0;
}