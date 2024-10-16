#include <iostream>
using namespace std;

int main()
{
    cout << "SIMPLE CALCULATOR" << endl;

    double num1, num2;
    double num;
    cout << "Enter Number 1 : ";
    cin >> num1;

    cout << "Enter Number 2 : ";
    cin >> num2;

    char Operator;
    cout << "Enter the Operation Symbol to be performed : ";
    cin >> Operator;

    switch (Operator)
    {
    case '+':
        num = num1 + num2;
        break;
    case '*':
        num = num1 * num2;
        break;
    case '-':
        num = num1 - num2;
        break;
    case '/':
        num = num1 / num2;
        break;
    case '%':
        num = (int)num1 % (int)num2;
        break;
    default:
        cout << "Invalid Operator Symbol" << endl;
    }

    cout << num;
    return 0;
}