#include <iostream>
void onFailedInput();

void problem20()
{
    int a, b;
    double res;
    char operation;
    std::cout << "Enter two numbers:";
    std::cin >> a >> b;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    std::cout << "Please enter operation (+,-,/,*):";
    std::cin >> operation;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }

    switch (operation) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            if (b < 0)
            {
                std::cout << a << " " << operation << " (" << b << ")" <<  " = " << res << std::endl;
                return;
            }
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            if (b == 0)
            {
                std::cout << "Can't divide by zero\n";
                return;
            }
            res = double(a) / b;
            break;
        default:
            std::cout << "Invalid operation\n";
            return;
    }

    std::cout << a << " " << operation << " " << b <<  " = " << res << std::endl;
}