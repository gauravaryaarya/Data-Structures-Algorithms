#include <iostream>
using namespace std;

int decimal(int binary)
{
    int ans = 0;
    int pow = 1;
    for (int i = 0; binary != 0; i++)
    {
        int lastdec = binary % 10;
        ans = ans + lastdec * pow;
        binary = binary / 10;
        pow = pow * 2;
    }

    return ans;
}

int main()
{
    int binary = 1010;
    cout << decimal(binary);
    return 0;
}