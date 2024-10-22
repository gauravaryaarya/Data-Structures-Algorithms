#include <iostream>
using namespace std;

int binary(int decimal)
{
    int ans = 0;
    int pow = 1;
    for (int i = 0; decimal != 0; i++)
    {
        int bin = decimal % 2;
        decimal = decimal / 2;
        ans = ans + bin * pow;
        pow = pow * 10;
    }
    return ans;
}

int main()
{
    int decimal = 4;
    cout << binary(decimal);
    return 0;
}