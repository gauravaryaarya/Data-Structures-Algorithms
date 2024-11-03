// Figure out how to find if a number is power of 2
//  without using loops

#include <iostream>
using namespace std;

int deciamltobinary(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int last = n % 2;
        ans += pow * last;
        pow *= 10;
        n = n / 2;
    }
    return ans;
}
int main()
{
    int n = 18;
    int binary = deciamltobinary(n);
    int lastdigit = binary % 10;

    if (lastdigit == 1)
    {
        cout << "not power of 2";
    }
    else
    {
        cout << "power of 2";
    }

    return 0;
}