#include <iostream>

void onFailedInput();

void problem9()
{
    int num, d1, d2, d3, d4;
    std::cout << "Check if number(4-digit) is a palindrome.\nPlease type a number:";

    std::cin >> num;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }
    num = abs(num);
    if ((num / 10000 != 0) || (num / 1000 == 0))
    {
        std::cout << "Input number must be a 4-digit\n";
        return;
    }

    d1 = num / 1000;
    d2 = num / 100 % 10;
    d3 = num / 10 % 10;
    d4 = num % 10;
    if (d1 == d4 && d2 == d3)
    {
        std::cout << "Yes\n";
    } else
    {
        std::cout << "No\n";
    }
}
