#include <iostream>

void onFailedInput();

void problem6()
{
    int num, digit, d1, d2, d3, d4;
    std::cout << "Check if number(4-digit) contains provided digit.\nPlease type a number:";

    std::cin >> num;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }
    if ((num / 10000 != 0) || (num / 1000 == 0))
    {
        std::cout << "Input number must be a 4-digit\n";
        return;
    }
    num = abs(num);
    std::cout << "Please type a digit:";

    std::cin >> digit;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }
    digit = abs(digit);

    if (digit > 9)
    {
        std::cout << "Invalid digit (must be in [0, 9])\n";
        return;
    }

    d1 = num / 1000;
    d2 = num / 100 % 10;
    d3 = num / 10 % 10;
    d4 = num % 10;

    if (digit == d1 || digit == d2 ||digit == d3 ||digit == d4)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}
