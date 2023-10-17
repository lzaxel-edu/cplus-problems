#include <iostream>

void onFailedInput();

void problem7()
{
    int num, sum, d1, d2, d3;
    std::cout << "Check if sum of number(3-digit) digits is even.\nPlease type a number:";

    std::cin >> num;
    if (std::cin.fail())
    {
        onFailedInput();
        return;
    }
    num = abs(num);
    if ((num / 1000 != 0) || (num / 100 == 0))
    {
        std::cout << "Input number must be a 3-digit\n";
        return;
    }

    d1 = num / 100;
    d2 = num / 10 % 10;
    d3 = num % 10;
    sum = d1+d2+d3;

    if (sum % 2 == 0)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
}
