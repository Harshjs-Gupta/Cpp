// write  a program to choose operation you perform and number inter by user and get output
#include <iostream>
using namespace std;

int Operation(char opt, int num1, int num2) //+ , - . / , *;
{

    int result = 0;

    if (opt == '+')
    {
        return num1 + num2;
    }
    else if (opt == '-')
    {
        return num1 - num2;
    }
    else if (opt == '*')
    {
        return num1 * num2;
    }
    else if (opt == '/')
    {
        return num1 / num2;
    }
}

int main()
{

    int num1, num2, result;

    char opt;

    cout << "\n Enter the operator [+ / - *]:";
    cin >> opt;

    cout << "\n Enter the number : ";
    cin >> num1;

    cout << "\n Enter the second number: ";
    cin >> num2;

    result = Operation(opt, num1, num2);
    cout << "\n result after opertaion: " << num1 << " " << opt << " " << num2 << " = " << result;

    return 0;
}
