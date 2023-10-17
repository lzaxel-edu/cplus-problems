#include <iostream>

void onFailedInput();

void problem8()
{
    int num, d1, d2, d3;
    std::cout << "Find count of same digits of number(3-digit).\nPlease type a number:";

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

    if (d1 == d2 && d2 == d3)
    {
        std::cout << "Count: 3\n";
        return;
    } else if (d1 == d2 || d2 == d3 || d1 == d3)
    {
        std::cout << "Count: 2\n";
        return;
    } else
    {
        std::cout << "Count: 0\n";
        return;
    }
}
